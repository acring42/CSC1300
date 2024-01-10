/*******************************************************************
 * Title:   Lab3B.cpp
 * Author:  Austin Ring
 * Date:    September 15, 2020
 * Purpose: Calculating paint needed for specific wall area
*******************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
    float height, width, wallArea, gallofPaint;
    int cansNeeded;
    const int PAINTSQFT = 350; // gallon of paint covers 350 square ft

    cout << "\nEnter wall height (feet):\n";
    cin >> height;
    cout << "Enter wall width (feet):\n";
    cin >> width;

    wallArea = height * width;
    gallofPaint = wallArea / PAINTSQFT;
    cansNeeded = ceil(gallofPaint); // round up # of needed paint cans to whole number

    cout << "\nWall area: " << wallArea << " square feet" << endl;
    cout << "Paint needed: " << gallofPaint << " gallons" << endl;
    cout << "Cans needed: " << cansNeeded << " can(s)";
    cout << endl << endl;
    
    return 0;
}