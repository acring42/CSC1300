#include <iostream>
#include <string>
using namespace std;

int main () {
    string month;
    int day;

    cout << "Enter a month and day" << endl;
    cin >> month;
    cin >> day;

    while (month != "January" && month != "Febuary" && month != "March" && month != "April" && month != "May" && month != "June" && month != "July" && month != "August" && month != "September" && month != "October" && month != "November" && month != "December" || day <= 0) {
        cout << "invalid" << endl;
        cin >> month;
        cin >> day;
    }
    
    while ((month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December") && (day > 31)) {
        cout << "invalid" << endl;
        cin >> month;
        cin >> day;
    }
    
    while ((month == "April" || month == "June" || month == "September" || month == "November") && (day > 30)) {
        cout << "invalid" << endl;
        cin >> month;
        cin >> day;
    }
    
    while(month == "February" && day > 29) {
        cout << "invalid" << endl;
        cin >> month;
        cin >> day;
    }
    
    if ((month == "March" && day >= 20) || month == "April" || month == "May" || (month == "June" && day <= 20)) 
        cout << "spring";
    
    else if ((month == "June" && day >= 21) || month == "July" || month == "August" || (month == "September" && day <= 21))
        cout << "summer";

    else if ((month == "September" && day >= 22) || month == "October" || month == "November" || (month == "December" && day <= 20))
        cout << "autumn";
    
    else
        cout << "winter";
    
    return 0;
}