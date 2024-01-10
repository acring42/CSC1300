#include <iostream>
using namespace std;

int main() {

    int result;
    
    result = 5 + 2 * 4;
    cout << "5 + 2 * 4 is " << result << endl;

    result = (5 + 2) * 4;
    cout << "(5 + 2) * 4 is " << result << endl;

    result = 10 / 5 - 3;
    cout << "10 / 5 - 3 is " << result << endl;
    
    result = 10 / (5 - 3);
    cout << "10 / (5 - 3) is " << result << endl;

    result = 6 - 3 * 2 + 7 - 1 + 17 % 2 ;
    cout << "6 - 3 * 2 + 7 - 1 + 17 % 2 is " << result << endl;

    result = (6 - 3) * 2 + (7 - 1) + 17 % 2 ;
    cout << "(6 - 3) * 2 + (7 - 1) + 17 % 2 is " << result << endl;

    return 0;


}