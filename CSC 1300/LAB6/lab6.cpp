/*********************************************************************
 * Title:   Lab6.cpp                                                 *
 * Author:  Austin Ring                                              *
 * Date:    October 21, 2020                                         *
 * Purpose: Calculating area using functions                         *
 *********************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

void displayMenu();
void areaSquare(float&);
void areaRectangle(float&, float&);
void areaParallelogram(float&, float&);
void areaCircle(float&);

const float PI = 3.14159;

int main(){
    float height, base, width, radius;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        while(!(choice <= 5 && choice >= 1)){
            cout << "Invalid input." << endl;
            cin >> choice;
        }
        switch(choice){
            case 1:
                cout << "Enter the height of the square:" << endl;
                cin >> height;
                areaSquare(height);
                break;
            case 2:
                cout << "Enter the height & width of the rectangle, separated by a space:" << endl;
                cin >> height;
                cin >> width;
                areaRectangle(height, width);
                break;
            case 3:
                cout << "Enter the base and height of the parallelogram, separated by a space:" << endl;
                cin >> base;
                cin >> height;
                areaParallelogram(base, height);
                break;
            case 4:
                cout <<"Enter the radius of the circle:" << endl;
                cin >> radius;
                areaCircle(radius);
                break;
            case 5:
                cout << "\n\nGoodbye!" << endl;
                return 0;
                break;
        }

    }while(choice != 5);
    return 0;
}

void displayMenu(){
    cout << "\n\nChoose a shape to calculate area or 5 to quit:" << endl;
    cout << "       1. Square" << endl;
    cout << "       2. Rectangle" << endl;
    cout << "       3. Parallelogram" << endl;
    cout << "       4. Circle" << endl;
    cout << "       5. End Program" << endl;
    cout << "CHOOSE 1-5: ";
}

void areaSquare(float &a){
    float area;
    area = pow(a, 2);
    cout << "\nThe area of your square is " << area << endl;
}

void areaRectangle(float &a, float &b){
    float area;
    area = a * b;
    cout << "\nThe area of your rectangle is " << area << endl;
}

void areaParallelogram(float &a, float &b){
    float area;
    area = a * b;
    cout << "\nThe area of your parallelogram is " << area << endl;
}

void areaCircle(float &a){
    float area;
    area = PI * pow(a, 2);
    cout << "\nThe area of your circle is " << area << endl;
}