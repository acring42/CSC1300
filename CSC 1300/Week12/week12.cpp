/*********************************************************************
 * Title:   week12.cpp                                               *
 * Author:  Austin Ring                                              *
 * Date:    November 11, 2020                                        *
 * Purpose: Dynamic Memory Allocation of Arrays of Structures        *
 *********************************************************************/
#include <iostream>
using namespace std;

struct Phone{
    string type, color;
    int memCap;
};

const int SIZE = 5;
void addPhone(Phone*&);
void printArray(Phone*);

int main(){
    Phone *phone;
    phone = new Phone[SIZE];

    addPhone(phone);
    printArray(phone);

    delete [] phone;

    return 0;
}

void addPhone(Phone*& a){
    for(int i=0; i<SIZE; i++){
        cout << "\nEnter data for phone number: " << i+1 << endl;
        cout << "What type of phone do you have? ";
        getline(cin, (a+i)->type);
        cout << "Phone color: ";
        getline(cin, (a+i)->color);
        cout << "Data Capacity(GB): ";
        cin >> (a+i)->memCap;
        cin.ignore();
    }
}

void printArray(Phone* a){
    cout << "\n*************************" << endl;
    for(int i=0; i<SIZE; i++){
        cout << "Phone: " << (a+i)->type << endl;
        cout << "Color: " << (a+i)->color << endl;
        cout << "Capacity: " << (a+i)->memCap << endl;
        cout << "\n";
    }
    cout << "*************************" << endl;
}