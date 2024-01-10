#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float caffeine;
    int i, time = 0;

    cout << "Enter caffeine amount in mg" << endl;
    cin >> caffeine;

    while (caffeine <= 0) {
        cout << "\nInvalid response! Please enter a positve, non-zero number." << endl;
        cin >> caffeine;
    }

    for (i=0; i < 3; i++) {
        caffeine = caffeine / 2;
        time += 6;
        cout << setprecision(2) << fixed;
        cout << "\nAfter " << time << " hours: " << caffeine << " mg" << endl;;
    }
    
    return 0;
}