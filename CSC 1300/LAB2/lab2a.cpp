/****************************************************************
 *	Title:  lab2a.cpp                               *
 *	Date:	9/1/2020                                *
 *	Author:	Austin Ring                             *
 ****************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double stockPrice = 35.00;
    double totalNC = stockPrice * 750.00;
    double commission = totalNC * .02;
    double totalWC = totalNC + commission;
    cout << setprecision(2) << fixed;

    cout << "Amount paid for the stock: " << "$" << totalNC << endl;
    cout << "Commission paid on the sale: " << "$" << commission << endl;
    cout << "Total amount paid for the stock: " << "$" << totalWC << endl;

    return 0;
}
