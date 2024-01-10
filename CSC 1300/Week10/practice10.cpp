#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    int *x, *y, *one, *two;
    x = &a;
    y = &b;

    cout << "\nEnter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    cout << "\nPointer 1 has an address of " << x << " and a value of " << *x << endl;
    cout << "Pointer 2 has an address of " << y << " and a value of " << *y << endl;

    *x = *x + *y;
    cout << "\nThe sum is " << *x << endl;
    cout << "Pointer 1 has an address of " << x << " and a value of " << *x << endl;
    cout << "Pointer 2 has an address of " << y << " and a value of " << *y << endl;

    c = a;
    d = b;
    *x = d;
    *y = c;
    cout << "\nAfter swapping the values they point to: " << endl;
    cout << "Pointer 1 has an address of " << x << " and a value of " << *x << endl;
    cout << "Pointer 2 has an address of " << y << " and a value of " << *y << endl;

    one = y;
    two = x;
    cout << "\nAfter swapping the addresses they point to: " << endl;
    cout << "Pointer 1 has an address of " << one << " and a value of " << *one << endl;
    cout << "Pointer 2 has an address of " << two << " and a value of " << *two << endl;

    return 0;
}