/**********************************************
 * Title:   Program2.cpp                      *
 * Author:  Austin Ring                       *
 * Date:    October 5, 2020                   *
 * Purpose: MASH game                         *
 **********************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int menu(int);
string randomPick_str(string, string, string);
int randomPick_int(int, int, int);

int main() {
    //the out1, out2...etc variables are used to store the choices that will be displayed in the results
    int userMenu, ranNum, numKids1, numKids2, numKids3, salary1, salary2, salary3, out3, out7;
    string out1, out2, out4, out5, out6, out8, spouse1, spouse2, spouse3, whereLive1, whereLive2, whereLive3, jobTitle1, jobTitle2, jobTitle3, jobPlace1, jobPlace2, jobPlace3, car1, car2, car3;
    bool i; // used for the do while loop

    // menu function is called to ask user if they would to participate in the game which will be fed into switch statement below to either play game or end program
    userMenu = menu(userMenu); 

    switch(userMenu) {
        case 1:
            cout << "You chose to play MASH!" << endl;
            break;
        case 2:
            cout << "You chose to end the program.\nBye!" << endl;
            return 0;
            break;
    }

    do {
        // takes a random number and uses the switch statement to pick the user response that corresponds to the number generated
        // a similar system is used throughout the program to accomplish similar tasks
        ranNum = rand() % (4) + 1;
        switch(ranNum) {
            case 1:
                out1 = "a huge mansion.";
                break;
            case 2:
                out1 = "an apartment.";
                break;
            case 3:
                out1 = "a broken down shack.";
                break;
            case 4:
                out1 = "a nice house.";
                break;
        }

        cout << "Enter in one person you like:  ";
        cin.ignore();
        getline(cin, spouse1);
        cout << "Enter in another person you like:  ";
        getline(cin, spouse2);
        cout << "Enter in one person you hate:  ";
        getline(cin, spouse3);
        out2 = randomPick_str(spouse1, spouse2, spouse3); // runs function and assigns returned input to specific output. Similar methods are used throughout the program.

        cout << "\nEnter three numbers between 1 and 100, seperated by a space." << endl;
        cin >> numKids1;
        cin >> numKids2;
        cin >> numKids3;

        // validates that the user input is in the specified range
        while(numKids1 > 100 || numKids1 < 1) {
            cout << "Your first number you entered was invalid." << endl;
            cout << "Invalid response. Please pick a number between 1 and 100" << endl;
            cin >> numKids1;
        }
        while(numKids2 > 100 || numKids2 < 1) {
            cout << "Your second number you entered was invalid." << endl;
            cout << "Invalid response. Please pick a number between 1 and 100" << endl;
            cin >> numKids2;
        }
        while(numKids3 > 100 || numKids3 < 1) {
            cout << "Your third number you entered was invalid." << endl;
            cout << "Invalid response. Please pick a number between 1 and 100" << endl;
            cin >> numKids3;
        }
        out3 = randomPick_int(numKids1, numKids2, numKids3);

        cout << endl;
        cout << "Enter in one city, state you like:  ";
        cin.ignore();
        getline(cin, whereLive1);
        cout << "Enter in another city, state you like:  ";
        getline(cin, whereLive2);
        cout << "Enter in one city, state you hate:  ";
        getline(cin, whereLive3);
        out4 = randomPick_str(whereLive1, whereLive2, whereLive3);

        cout << endl;
        cout << "Enter a company or restaurant you like:  ";
        getline(cin, jobPlace1);
        cout << "Enter another company or restaurant you like:  ";
        getline(cin, jobPlace2);
        cout << "Enter a company or restaurant you hate:  ";
        getline(cin, jobPlace3);
        out5 = randomPick_str(jobPlace1, jobPlace2, jobPlace3);

        cout << endl;
        cout << "Enter in an awesome job title:  ";
        getline(cin, jobTitle1);
        cout << "Enter in another awesome job title:  ";
        getline(cin, jobTitle2);
        cout << "Enter in the worst job title:  ";
        getline(cin, jobTitle3);
        out6 = randomPick_str(jobTitle1, jobTitle2, jobTitle3);

        cout << endl;
        cout << "Enter three numbers between 10,000 and 500,000. separated by a space." << endl;
        cin >> salary1;
        cin >> salary2;
        cin >> salary3;
        cin.ignore();

        // same validation loop as above just with a different range
        while(salary1 > 500000 || salary1 < 10000) {
            cout << "Your first number you entered was invalid." << endl;
            cout << "Invalid response. Please pick a number between 10,000 and 500,000." << endl;
            cin >> salary1;
        }
        while(salary2 > 500000 || salary2 < 10000) {
            cout << "Your second number you entered was invalid." << endl;
            cout << "Invalid response. Please pick a number between 10,000 and 500,000." << endl;
            cin >> salary2;
        }
        while(salary3 > 500000 || salary3 < 10000) {
            cout << "Your third number you entered was invalid." << endl;
            cout << "Invalid response. Please pick a number between 10,000 and 500,000." << endl;
            cin >> salary3;
        }
        out7 = randomPick_int(salary1, salary2, salary3);

        cout << endl;
        cout << "Enter in a car that you like:  ";
        getline(cin, car1);
        cout << "Enter in another car that you like:  ";
        getline(cin, car2);
        cout << "Enter in a car that you hate:  ";
        getline(cin, car3);
        out8 = randomPick_str(car1, car2, car3);

        // results section
        cout << "\n******  Mash Results  ******" << endl;
        cout << "You will live in " << out1 << endl;
        cout << "You will be happily married to " << out2 << "." << endl;
        cout << "You and your spouse will have " << out3 << " child(ren)." << endl;
        cout << "You will live in " << out4 << "." << endl;
        cout << "You will work at " << out5 << " as a(n) " << out6 << " making $" << out7 << " a year." << endl;
        cout << "You will drive a " << out8 << "." << endl;

        // call function to ask if the user wants to play again. Input will feed into switch statement to either repeat dowhile loop or end program.
        userMenu = menu(userMenu);

        switch(userMenu){
            case 1:
                i = true;
                cout << "You chose to play MASH again!" << endl;
                break;
            case 2:
                i = false;
                cout << "You chose to end the program.\nBye!" << endl;
                break;
        }

    }while(i != false);

    return 0;
}
////////////////////////////////////////////////////////////
// function displays the menu options, take user input, then
// validates that user input.
int menu(int input) {
    cout << "\nPick from the following menu: " << endl;
    cout << "1.  Let's play MASH!" << endl;
    cout << "2.  End Program." << endl;
    cin >> input;

    while(input != 1 && input != 2) {
        cout << "\nInvalid choice. Select 1 or 2." << endl;
        cin >> input;
    }
    return (input);
}
////////////////////////////////////////////////////////////
// user string inputs are assigned a number then a random
// number is generated to choose which input is displayed.
string randomPick_str(string one, string two, string three) {
    srand(time(0)); // provides seed for random number
    int ranNum;
    string a; // "a" will be the variable used to hold input that will be returned
    ranNum = rand() % (3) + 1;
        switch(ranNum) {
            case 1:
                a = one;
                break;
            case 2:
                a = two;
                break;
            case 3:
                a = three;
                break;
        }
    return (a);
}
////////////////////////////////////////////////////////////
// user integer inputs are assigned a number then a random
// number is generated to choose which input is displayed.
int randomPick_int(int one, int two, int three) {
    srand(time(0)); // provides seed for random number
    int ranNum, b; // "b" will be the variable used to hold input that will be returned
    ranNum = rand() % (3) + 1;
        switch(ranNum) {
            case 1:
                b = one;
                break;
            case 2:
                b = two;
                break;
            case 3:
                b = three;
                break;
        }
    return (b);
}