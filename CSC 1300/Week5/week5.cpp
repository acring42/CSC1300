/*********************************************************
 * Title:   Week5.cpp                                    *
 * Author:  Austin Ring                                  *
 * Date:    September 23, 2020                           *
 * Purpose: Random Numbers and Loops                     *
 *********************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int ranNum, ranSum = 0, guess, i;
    srand(time(0));

    for (i = 1; i <= 10; i++) {
        ranNum = rand() % (71) + 7;
        cout << "Random Number " << i << ": " << ranNum << endl;
        ranSum += ranNum; 
    }
    cout << "The total of all random numbers is " << ranSum << endl;

    cout << "Guess a number between 70 and 770" << endl;
    cin >> guess;

    while (guess < 70 || guess > 770) {
        cout << "That number is not in the valid range." << endl;
        cout << "Guess a number between 70 and 770" << endl;
        cin >> guess;
    }

    if (guess == ranSum)
        cout << "You have gained the super power where skittles can shoot from your fingertips!";
    else if ((guess >= ranSum - 10 && guess < ranSum) || (guess <= ranSum + 10 && guess > ranSum))
        cout << "You have gained the super power where peas can shoot from your fingertips!";
    else
        cout << "You get no super powers.";

    return 0;
}