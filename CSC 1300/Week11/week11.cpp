/*********************************************************************
 * Title:   week11.cpp                                               *
 * Author:  Austin Ring                                              *
 * Date:    November 4, 2020                                         *
 * Purpose: Dynamic Allocation of Arrays                             *
 *********************************************************************/
#include <iostream>
using namespace std;

void resize(int*&, int&);
void displayArray(int*, int);

int main(){
    int input, size, *array, counter = 0;
    bool loop = true;
    cout << "\n\nWhat is your starting array size? ";
    cin >> size;
    while(size < 1){
        cout << "Incorrect Response! Size must be a positive number.";
        cin >> size;
    }
    array = new int[size];
    cout << "\nBegin entering positive integers (enter 0 or a negative integer to quit):" << endl;

    while(loop != false){
        cout << "Element " << counter << ": ";
        cin >> input;
        if(input > 0){
            loop = true;
            *(array+counter) = input;
            counter++;
            if(counter > size){
               resize(array, size);
               cout << "Array resized. New array size: " << size << endl;
            }
        }
        else
            loop = false;
    }
    displayArray(array, counter);

    delete [] array;
    return 0;
}

void resize(int*& a, int& b){
    int* c = new int[b*2];
    for(int i=0; i<b; i++)
        *(c+i) = *(a+i);
    
    *a = *c;
    b = (b*2);
}

void displayArray(int* d, int e){
    cout << "\nThe numbers entered were: " << endl;
    for(int i=0; i<e; i++)
        cout << *(d+i) << endl;
}