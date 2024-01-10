/*********************************************************************
 * Title:   program4.cpp                                             *
 * Author:  Austin Ring                                              *
 * Date:    November 9, 2020                                         *
 * Purpose: Madlibs game                                             *
 *********************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int showMenuGetChoice(int);
string* createStringArray(int);
void getInfoFromUser(string*, string*, int);
void printStory(int, string*, int);

int main(){
    int choice, size, i;
    string *prompts, *answers;
    ifstream promptFile;

    do{
        choice = showMenuGetChoice(choice);
        switch(choice){
            case 1:
                promptFile.open("starWars.txt");
                break;
            case 2:
                promptFile.open("dog.txt");
                break;
            case 3:
                promptFile.open("pirate.txt");
                break;
            default:
                return 0;
                break;
        }
        if(promptFile.fail())
            cout << "\nERROR! The file couldn't be opened" << endl;

        else{
            promptFile >> size;
            prompts = createStringArray(size);
            answers = createStringArray(size);

            promptFile.ignore(); // bypass the integer on first line of file
            for(i=0; i<size; i++)
                getline(promptFile, *(prompts+i));
            promptFile.close();

            getInfoFromUser(prompts, answers, size);
            printStory(choice, answers, size);
            
            delete [] prompts;
            delete [] answers;
        }

    }while(choice != 4);
    
    return 0;
}
/* asks the user which MADLIBS story the want to do or if they 
   they want to end the game. User input is returned to main function */
int showMenuGetChoice(int a){
    cout << "Let's Play some MADLIBS!!" << endl;
    cout << "\nChoose a MAD LIBS game:" << endl;
    cout << "1. The Power of the Force (Star Wars Mad Libs)" << endl;
    cout << "2. Dog Days (Dog Ate My Mad Libs)" << endl;
    cout << "3. Talk Like a Pirate (Pirates Mad Libs)" << endl;
    cout << "4. END GAME" << endl;
    cout << "\nCHOOSE 1-4: ";
    cin >> a;

    while(a > 4 || a < 1){
        cout << "\nIncorrect Response! Please Enter 1-4: ";
        cin >> a;
    }
    return a;
}
/* takes the size of the array given from the file opened from the menu
   and dynamically allocates a new string array using that size */
string* createStringArray(int b){
    string* array = new string[b];
    return array;
}
/* getInfoFromUser outputs the prompts and asks the user
   for an answer to each prompt */
void getInfoFromUser(string* x, string* y, int z){
    cin.ignore();
    for(int i=0; i<z; i++){
        cout << *(x+i) << ": ";
        getline(cin, *(y+i));
    }
}
/* printStory opens the corresponding file selected in the menu, puts line 
   from file into a string, outputs that line along with the corresponding 
   answer from the answer array, and repeats the process until end of array */
void printStory(int input, string* answer, int size){
    ifstream answerFile;
    string story;
    switch(input){
        case 1:
            answerFile.open("starWarsText.txt");
            break;
        case 2:
            answerFile.open("dogText.txt");
            break;
        case 3:
            answerFile.open("pirateText.txt");
            break;
    }
    if(answerFile.fail())
         cout << "\nERROR! The file couldn't be opened" << endl;
    
    else{
        cout << "\n\n";
        for(int i=0; i<size; i++){
            getline(answerFile, story);
            cout << story << *(answer+i);
        }
        cout << "\n\n";
    }
    answerFile.close();
}