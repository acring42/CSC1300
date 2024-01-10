/*******************************************************************
 * Title:   Lab5.cpp
 * Author:  Austin Ring
 * Date:    September 29, 2020
 * Purpose: Random Numbers and Loops
*******************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));
    int randomNum, userGuess;
    char retry;

    do {
        int attempts = 0;
        bool loop = true;
        
        randomNum = rand()%(100) + 1;
        cout << "Enter a number between 1 and 100" << endl;
        cout << "Enter your guess: ";
        cin >> userGuess;
        ++attempts;
       
        while (userGuess != randomNum) {
            if (userGuess < randomNum && userGuess <= 100 && userGuess >= 1) {
                cout << "Too Low" << endl;
                cout << "Enter your guess: ";
                cin >> userGuess;
                ++attempts;
            }
            else if (userGuess > randomNum && userGuess <= 100 && userGuess >= 1) {
                cout << "Too High" << endl;
                cout << "Enter your guess: ";
                cin >> userGuess;
                ++attempts;
            }
            else {
                while (userGuess > 100 || userGuess < 1) {
                cout << "You entered an invalid number. Choose between 1 and 100." << endl;
                cin >> userGuess;
                }
            }
        }

        cout << "Correct! You got it in " << attempts << " tries!" << endl;

        cout << "Do you want to play again? (y/n)" << endl;
        cin >> retry;

        while(retry != 'y' && retry != 'n') {
            cout << "Invalid input. You must answer a 'y' or a 'n'." << endl;
            cin >> retry;
        }

    }while (retry == 'y');

    return 0;
}

