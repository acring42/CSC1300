/************************************************************
 *	File Name:		driver.cpp                              *
 *	Author:         Austin Ring                             *
 *	Date Modified:  11/19/2020                              *
 *	Purpose:        Factory Inventory Program               *
 ************************************************************/
#include "item.h"

int menu();
int add(Item*, int, int);
void printItems(Item*, int);
void saveInventory(Item *, int);

int main(){
    int size, choice, numItems = 0;
    bool loop = true;
    Item *items;
    cout << "Welcome to the Geek Factory!" << endl;
    cout << "\nWhat is the maximum number of items your factory can hold?" << endl;
    cin >> size;
    items = new Item[size];

    do{
        choice = menu();
        switch(choice){
            case 1:
                numItems = add(items, numItems, size);
                cout << "Currently there are " << numItems << " in the inventory." << endl;
                break;
            case 2:
                printItems(items, numItems);
                break;
            case 3:
                saveInventory(items, numItems);
                loop = false;
                break;
        }
    }while(loop != false);
    cout << "\nGoodbye!" << endl;

    for(int i=0; i<size; i++)
        delete [] (items+i); 
    delete [] items;
    return 0;
}