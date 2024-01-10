/*******************************************************************
 * Title:   Lab3A.cpp
 * Author:  Austin Ring
 * Date:    September 15, 2020
 * Purpose: Simple input and output and casting variables
*******************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int integer;
    double doub;
    char letter;
    string word;

    cout << "\nEnter integer:" << endl;
    cin >> integer;
    cout << "Enter double:" << endl;
    cin >> doub;
    cout << "Enter character:" << endl;
    cin >> letter;
    cout << "Enter string:" << endl;
    cin >> word;

    cout << endl;
    cout << integer << " " << doub << " " << letter << " " << word << endl;
    cout << word << " " << letter << " " << doub << " " << integer << endl;
    cout << doub << " cast to an integer is " << (int)doub;

    return 0;
}