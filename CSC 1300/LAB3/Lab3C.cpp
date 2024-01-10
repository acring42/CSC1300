/*******************************************************************
 * Title:   Lab3C.cpp
 * Author:  Austin Ring
 * Date:    September 15, 2020
 * Purpose: This program calculates the circumference of a circle.
*******************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
    const float PI = 3.14159;
    string fullName;
    float circumference, diameter;

    cout << "\nWhat is the diameter of the circle?\n";
    cin >> diameter;
    cin.ignore();

    cout << "\nWhat is your first & last name?\n";
    getline(cin, fullName);

    // Calculate the circumference.
    circumference = PI * diameter;

    // Display the circumference.
    cout << "\nHello, " << fullName;
    cout << "! The circumference of your circle is: " << circumference;
    cout << endl << endl;

    return 0;
}
