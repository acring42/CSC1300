/**************************************************************************
 *	Title:   ch3PracticeA.cpp                                             *
 *	Date:	 9/16/2020                                                    *
 *	Author:	 Austin Ring                                                  *
 *  Purpose: Simple input and output using getline and if else statements *
 **************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string firstName, lastName, major, name;
    name = firstName + lastName;
    int gradYear, reunion;

    cout << "\nWhat is your full name? ";
    getline(cin, name);
    
    cout << "\nWhat is your graduation year? ";
    cin >> gradYear;
    cin.ignore();
    
    cout << "\nWhat is your major? ";
    getline(cin, major);

    reunion = gradYear + 20;

    if (gradYear % 2 == 0)
    {
        cout << endl;
        cout << name << ", your graduation year ";
        cout << gradYear << " is even and your major is " << major << "!" << endl;
    }
    else 
    {
        cout << endl;
        cout << name << ", your graduation year " << gradYear << " is odd ";
        cout << "and your major is " << major << "!" << endl;
        cout << "You will have your 20-year reunion in " << reunion << endl;
    }

    cout << "\nThe End";
    cout << endl << endl;
    
    return 0;
}