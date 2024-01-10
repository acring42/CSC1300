/************************************************************
 *	File Name:		Functions.cpp                           *
 *	Author:         Austin Ring                             *
 *	Date Modified:  10/27/2020                              *
 *	Purpose:        all the functions for Elephant Zoo		*
 ************************************************************/
#include "Elephant.h"

void getElephantData(float a[], string b[]){
    int i;
    cout << "Enter the name and how many pounds of food each ";
    cout << "elephant ate last month." << endl;
    for(i=0; i<SIZE; ++i){
        cout << "Elephant " << i+1 << ":" << endl;
        cout << "   NAME - ";
        getline(cin, b[i]);
        cout << "   FOOD AMOUNT - ";
        cin >> a[i];
        cin.ignore();
    }
}

void getStats(float amounts[], float& total, float& average, int& maxFood){
    int x;
    maxFood = 0;
    total = 0;
    for(x=0; x<SIZE; ++x){
        total += amounts[x];
        if(amounts[maxFood] < amounts[x])
            maxFood = x;
    }
    average = (total / SIZE);
}