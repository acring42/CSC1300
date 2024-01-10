/************************************************************
 *	File Name:		hangman.cpp                             *
 *	Author:    		Austin Ring                             *
 *	Date Modified:  10/15/2020                              *
 *	Purpose:        Hangman Game							*
 ************************************************************/
#include "hangman.h"

int main(){
    srand(time(0));
    bool playAgain;
    string guess;
    char choice, letter;
    char word[21];
    char underScores[21];
    char alphabet[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    bool userGuesses[26];
    int alphLength = strlen(alphabet); // num of characters in alphabet
    int i, wordSize, wordSelect, letterCounter, stage, win, numPlays; // i is used as an increment variable in all for loops

    ifstream wordBankFile;
    numPlays = 1;
    
    do{
        stage = 0;
        win = 1; // this value doesn't matter because the while loop works only if win != 0
        // these 2 for loops set every element of userGuesses to false and underScores to '_'
        for (i=0; i<26; i++)
            userGuesses[i] = false;
        for (i=0; i<21; i++)
            underScores[i] = '_';

        // allows program to read and select word from wordBank.txt
        wordBankFile.open("wordBank.txt");
        if (wordBankFile.fail()){
            cout << "Error! A word could not be found in word bank." << endl;
            return 0;
        }

        // this function take a random number which corresponds to the word on that number's line
        wordSelect = numPlays;
        for (i=0; i<wordSelect; i++)
            wordBankFile >> word;
        wordSize = strlen(word); // num of characters in word array

        // this loop goes until user guesses incorrectly 6 times or the user guesses the word
        while (stage < 6 && win != 0){
            cout << setfill('*') << setw(100) << endl;
            letterCounter = 0; // increments if user guessed letter correctly
            printWord(word, underScores);
            printStage(stage);
            printLettersGuessed(userGuesses, alphabet);
            cout << setfill('-') << setw(100) << endl;

            cout << "\n\nWHAT LETTER DO YOU GUESS? ";
            cin >> guess;
            /* user's input is put into a string, then converted to the first letter of that string
               this prevents multiple letters being guessed on one turn */
            letter = guess[0]; 
            letter = toupper(letter);
            
            for (i=0; i<alphLength; i++){
                // function that validates if the user has already guessed
                while (letter == alphabet[i] && userGuesses[i] == true){
                    cout << "\nThat letter has already been guessed please select another" << endl;
                    cin >> guess;
                    letter = guess[0];
                    letter = toupper(letter);
                    i = 0; // restarts the "for" loop to continue validating user input
                }
                // updates the bool array for the corresponding letter the user inputs
                if(letter == alphabet[i]){
                    userGuesses[i] = true;
                }
            }
            // loop for if the user input is correct
            for (i=0; i<wordSize; i++){
                if(letter == word[i]){
                    underScores[i] = word[i];
                    letterCounter++;
                }
            }

            if (letterCounter > 0){
                cout << "\nCORRECT!" << endl;
            }
            else{
                cout << "\nWRONG!" << endl;
                stage++;
            }

            cout << "Press ENTER to Continue." << endl;
            cin.ignore();
            cin.get();

            /* this variable compares word and underScore arrays
               It is used to find out if the user has guessed the entire word */
            win = strncmp(word, underScores, wordSize);
        }
        // function for if the user wins the game
        if (win == 0){
            cout << setfill('*') << setw(100) << endl;
            cout << "\nYes! THE WORD WAS: " << word << endl;
            cout << "YOU WIN" << endl;
            cout << setfill('-') << setw(100) << endl;
        }
        // function for if the user loses
        else{
            cout << setfill('*') << setw(100) << endl;
            printStage(stage);
            cout << setfill('-') << setw(100) << endl;
        }

        cout << "\nDo you want to play again? (y/n)" << endl;
        cin >> choice;
        while (choice != 'y' && choice != 'n'){
            cout << "Incorrect Input! (y/n)" << endl;
            cin >> choice;
        }
        if (choice == 'y')
            playAgain = true;
        else
            playAgain = false;
        
        numPlays++;
        wordBankFile.close();
    }while(playAgain != false);
    return 0;
}