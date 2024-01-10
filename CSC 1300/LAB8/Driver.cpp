/************************************************************
 *	File Name:		Driver.cpp                              *
 *	Author:         Austin Ring                             *
 *	Date Modified:  10/27/2020                              *
 *	Purpose:        Driver file for Elephant Zoo		    *
 ************************************************************/
#include "Elephant.h"

int main(){
    float foodTotal, foodAvg, pounds[SIZE];
    int foodMax;
    char nameZoo[100];
    string nameElephants[SIZE];

    cout << "\nHello! What is the name of your elephant zoo?" << endl;
    cin.getline(nameZoo, 100);

    getElephantData(pounds, nameElephants);
    getStats(pounds, foodTotal, foodAvg, foodMax);

    cout << "\nThe total amount of food sonumed by all 10 elephants at ";
    cout << nameZoo << " is " << foodTotal << " pounds in one month." << endl;
    cout << "The average amount of food consumed at " << nameZoo;
    cout << " is " << foodAvg << " pounds.";
    cout << "\n\nThe elephant who eats the most (" << pounds[foodMax] << " pounds) is " << nameElephants[foodMax] << "!!" << endl;

    return 0;
}
