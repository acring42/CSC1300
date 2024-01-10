/****************************************************************
 *	Title:  lab2b.cpp                               *
 *	Date:	9/1/2020                                *
 *	Author:	Austin Ring                             *
 ****************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
 double customers = 16500;
 double numDrinks = customers * .15;
 double numCitrus = numDrinks * .58;

 cout << "Num of people who drink more than one a week: " << numDrinks << endl;
 cout << "Num of people who drink more tham one a week and prefer Citrus flavored: " << round(numCitrus) << endl;

 return 0;

}