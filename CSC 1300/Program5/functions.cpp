/************************************************************
 *	File Name:		functions.cpp                           *
 *	Author:         Austin Ring                             *
 *	Date Modified:  11/19/2020                              *
 *	Purpose:        Factory Inventory Program               *
 ************************************************************/
#include "item.h"
float convertToFloat(string);

// menu function displays the menu and returns the input from the user
// to determine which function to call next.
int menu(){
    int choice;
    cout << "\nPlease choose from the following options:" << endl;
    cout << "1.  Add awesome item(s)." << endl;
    cout << "2.  Print all items." << endl;
    cout << "3.  End the Program." << endl;
    cout << "CHOOSE 1-3:  ";
    cin >> choice;

    while(choice > 3 || choice < 1){
        cout << "Invalid Response! Choose 1-3" << endl;
        cin >> choice;
    }
    return choice;
}

// add function allows the user to either add items to inventory
// from a file or the user can enter one product at a time manually.
// The index of the array is determined from using the variable for
// the amount of items already in the structure array.
int add(Item * array, int num, int size){
    int choice2, tempInt, addNum;
    float tempFloat;
    string fileName, temp1;
    ifstream file;

    while(choice2 != 3 && num<size){
        cout << "\nDo you want to..." << endl;
        cout << "1) Add items from a file?" << endl;
        cout << "2) Add one item manuallly?" << endl;
        cout << "3) Return to main menu?" << endl;
        cout << "CHOOSE 1-3:  ";
        cin >> choice2;
        while(choice2 > 3 || choice2 < 1){
            cout << "Invalid Response! Choose 1-3" << endl;
            cin >> choice2;
        }
        cin.ignore();
        switch(choice2){
            case 1:
                cout << "\nName of file:" << endl;
                getline(cin, fileName);
                file.open(fileName);
                if(file.fail())
                    cout << "Unable to open file!" << endl;
                else{
                    addNum = 0;
                    while(!file.eof() && num<size){
                        getline(file, (array+num)->name, '#');
                        getline(file, (array+num)->description, '#');
                        getline(file, temp1, '#');
                        tempFloat = convertToFloat(temp1);
                        (array+num)->cost.rawPrice = tempFloat;
                        getline(file, temp1, '#');
                        tempFloat = convertToFloat(temp1);
                        (array+num)->cost.salePrice = tempFloat;
                        getline(file, temp1, '#');
                        tempFloat = convertToFloat(temp1);
                        (array+num)->cost.profit = tempFloat;
                        getline(file, temp1, '#');
                        tempFloat = convertToFloat(temp1);
                        (array+num)->numStores = tempFloat;
                        (array+num)->nameStores = new string[(array+num)->numStores];
                        for(int x=0; x<array[num].numStores; x++){
                            getline(file,(array+num)->nameStores[x], '#');
                        }
                        getline(file, (array+num)->createDate, '#');
                        ++num;
                        ++addNum;
                    }
                    cout << "\n";
                    cout << addNum << " items were added from " << fileName << " to your inventory!" << endl;
                }
                file.close();
                break;
            case 2:
                cout << "\nPlease enter the item detailes below:" << endl;
                cout << "Name:  ";
                getline(cin, (array+num)->name);
                cout << "Description:  ";
                getline(cin, (array+num)->description);
                cout << "Goods Price:  ";
                cin >> (array+num)->cost.rawPrice;
                cout << "Sale Price:  ";
                cin >>(array+num)->cost.salePrice;
                cout << "Number of Stores:  ";
                cin >> (array+num)->numStores;
                cin.ignore();
                (array+num)->nameStores = new string[(array+num)->numStores];
                for (int x=0; x<((array+num)->numStores); x++){
                    cout << "Store " << x+1 << ":  ";
                    getline(cin, (array+num)->nameStores[x]);
                }
                cout << "Creation Date: (example: 01 02 03) ";
                getline(cin, (array+num)->createDate);
                num++;
                break;
            default:
                break;
        }        
    }
    if(num>=size)
        cout << "\nOOPS! Warehouse is full!" << endl;
    return num;
}

// printItems function loops through the structure array and
// prints all members of the structure.
void printItems(Item * array, int num){
    if(num > 0){
        cout << "\nALL ITEMS:" << endl;
        for(int i=0; i<num; i++){
            cout << "-----------------------------------------" << endl;
            cout << "ITEM " << i+1 << endl;
            cout << "\nNAME:  " << (array+i)->name << endl;
            cout << "\nDESCRIPTION:  " << (array+i)->description << endl;
            cout << "\nGOODS PRICE:  " << fixed << setprecision(2) << (array+i)->cost.rawPrice <<  endl;
            cout << "\nSALE PRICE:  " << fixed << setprecision(2) << (array+i)->cost.salePrice << endl;
            cout << "\nPROFIT:  " << fixed << setprecision(2) << ((array+i)->cost.salePrice - (array+i)->cost.rawPrice) <<  endl;
            cout << "\nSTORES WHO SALE THIS ITEM:" << endl;
            for(int x=0; x< (array+i)->numStores; x++){
                cout << "STORE " << x+1 << " NAME:  ";
                cout << (array+i)->nameStores[x] << endl;
            }
            cout << "\nCREATION DATE:  " << (array+i)->createDate << endl;
            cout << "-----------------------------------------" << endl;
        }
    }
    else
        cout << "\nSorry, there are no items to print!" << endl;
}

// saveInventory function outputs all items of the structure array
// to a seperate file in order to save current inventory.
void saveInventory(Item * array, int num){
    ofstream file2;
    string fileName2;
    if(num>0){
        cout << "\nWhat do you want to name your inventory file? (example.txt)" << endl;
        cin.ignore();
        getline(cin, fileName2);
        file2.open(fileName2);

        for(int i=0; i<num; i++){
            file2 << (array+i)->name << "#";
            file2 << (array+i)->description << "#";
            file2 << (array+i)->cost.rawPrice << "#";
            file2 << (array+i)->cost.salePrice << "#";
            file2 << ((array+i)->cost.salePrice - array[i].cost.rawPrice) << "#";
            file2 << (array+i)->numStores << "#";
            for(int x=0; x<(array+i)->numStores; x++){
                file2 <<  (array+i)->nameStores[x] << "#";
            }
            file2 << (array+i)->createDate << '#';
        }
        file2.close();
        cout << "\nAll your items have been saved to " << fileName2 << "." << endl;
    }
    else
        cout << "\nThere are no items to save." << endl;
}

// convertToFloat function takes the string varibales we got
// from the getlines functions and turns them into float variables.
float convertToFloat(string str){
    float number;
    char convertStr[1000];
    strcpy(convertStr, str.c_str());
    number = atof(convertStr);
    return number;
}