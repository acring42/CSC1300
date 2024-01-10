/*********************************************************
 * Title:   Week7.cpp                                    *
 * Author:  Austin Ring                                  *
 * Date:    October 7, 2020                              *
 * Purpose: Calling functions                            *
 *********************************************************/

#include <iostream>
using namespace std;

void getData(string&, string&, string&, string&, int);
void printData(string&, string&, string&, string&, int);

int main() {
    string petName, petAge, petDesc, petEye;
    int i;

    for (i=1; i<=3; i++){
        getData(petName, petAge, petDesc, petEye, i);
        printData(petName, petAge, petDesc, petEye, i);
    }
    return 0;
}

void getData(string &a, string &b, string &c, string &d, int i) {
    cout << "Pet #" << i << endl;
    cout << "Pet Name: ";
    getline(cin, a);
    cout << "\nAge: ";
    getline(cin, b);
    cout << "\nDescription: ";
    getline(cin, c);
    cout << "\nEye Color: ";
    getline(cin, d);
}

void printData(string &one, string &two, string &three, string &four, int i) {
    cout << "*****************************************" << endl;
    cout << "YOU ENTERED THE FOLLOWING FOR PET #" << i << ":" << endl;
    cout << "Pet Name:      " << one << endl;
    cout << "Age:       " << two << endl;
    cout << "Description:       " << three << endl;
    cout << "Eye Color:     " << four << endl;
    cout << "*****************************************" << endl;
}