/************************************************************
 *	File Name:		lab10.cpp                               *
 *	Author:         Austin Ring                             *
 *	Date Modified:  11/10/2020                              *
 *	Purpose:        Array of Structures		                *
 ************************************************************/
#include <iostream>
using namespace std;

struct Friends{
    string name, birthDay, description;
    int age;
};

void enterFriends(Friends*, int);
void sortFriends(Friends*, int);
void printFriends(Friends*, int);

int main(){
    Friends* friends;
    int numFriends, menu;
    cout << "How many friends do you have?" << endl;
    cin >> numFriends;
    friends = new Friends[numFriends];

    do{
        cout << "\n\nChoose from the following options:" << endl;
        cout << "1. Enter friends" << endl;
        cout << "2. Print my friends" << endl;
        cout << "3. End Program" << endl;
        cout << "Choose 1-3: ";
        cin >> menu;
        while(menu < 1 || menu > 3){
            cout << "Incorrect Response! Enter 1-3: ";
            cin >> menu;
        }
        cin.ignore();

        switch(menu){
            case 1:
                enterFriends(friends, numFriends);
                break;
            case 2:
                sortFriends(friends, numFriends);
                printFriends(friends, numFriends);
                break;
            case 3:
                return 0;
                break;
        }
    }while(menu != 3);
    delete [] friends;
    return 0;
}

void enterFriends(Friends* a, int b){
    for(int i=0; i<b; i++){
        cout << "\nFriend " << i+1 << endl;
        cout << "Name: ";
        getline(cin, a[i].name);
        cout << "Birthday: ";
        getline(cin, a[i].birthDay);
        cout << "Age: ";
        cin >> a[i].age;
        cin.ignore();
        cout << "Description: ";
        getline(cin, a[i].description);
    }
}

void sortFriends(Friends* a, int b){
    int lowest;
    Friends temp;
    cout << "\n\nSorting your friends!\n\n";
    for(int i=0; i<b; i++){
        lowest = i;
        for(int x=i; x<b; x++)
            if(a[x].name < a[lowest].name)
                lowest = x;
        temp = a[lowest];
        a[lowest] = a[i];
        a[i] = temp;
    }
}

void printFriends(Friends* a, int b){
    for(int i=0; i<b; i++){
        cout << "\nFriend " << i+1 << endl;
        cout << "Name: " << a[i].name << endl;
        cout << "Birthday: " << a[i].birthDay << endl;
        cout << "Age: " << a[i].age << endl;
        cout << "Description: " << a[i].description << endl;
    }
}