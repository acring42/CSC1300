#include <iostream>
#include <iomanip>
using namespace std;

void getRestaurants(string [], int);
void displayArray(string [], int);

int main(){
    char fullName[25];
    string restaurants[10];

    cout << "What is your name? ";
    cin.getline(fullName, 25);

    cout << "Hi " << fullName << ", please enter your favorite restaurants!" << endl;
    getRestaurants(restaurants, 10);
    displayArray(restaurants, 10);
    return 0;
}

void getRestaurants(string a[], int b){
    for(int i=0; i<b; ++i){
        cout << "Enter restaurant " << i+1 << ": ";
        getline(cin, a[i]);
    }
}

void displayArray(string a[], int b){
    cout << setfill('*') << setw(25) << endl;
    cout << "\n";
    for(int i=0; i<b; ++i)
        cout << a[i] << endl;
}