/************************************************************
 *	File Name:		lab9.cpp                                *
 *	Author:         Austin Ring                             *
 *	Date Modified:  11/3/2020                               *
 *	Purpose:        Pointers		                        *
 ************************************************************/
#include <iostream>
using namespace std;

const int SIZE = 5;
void displayArrayAddresses(int*, int);
void displayArrayValues(int*, int);
void add10(int*);

int main(){
    int array[SIZE], *pointer, i;
    pointer = array;
    cout << "Enter in 5 integers" << endl;
    for(i=0; i<SIZE; i++){
        cin >> array[i];
    }

    displayArrayAddresses(pointer, SIZE);
    displayArrayValues(pointer, SIZE);

    for(i=0; i<SIZE; i+=2)
        add10(&pointer[i]);
    
    displayArrayValues(pointer,SIZE);

    return 0;
}

void displayArrayAddresses(int* a, int b){
    cout << "\n";
    for(int i=0; i<b; i++)
        cout << "The address of element " << i << " is " << (a+i) << endl;
}

void displayArrayValues(int* c, int d){
    cout << "\n";
    for(int i=0; i<d; i++)
        cout << "The value of element " << i << " is " << *(c+i) << endl;
}

void add10(int* e){
    *e += 10;
}