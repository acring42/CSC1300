/*********************************************************************
 * Title:   Lab7.cpp                                                 *
 * Author:  Austin Ring                                              *
 * Date:    October 20, 2020                                         *
 * Purpose: Gringotts Bank                                           *
 *********************************************************************/
#include <iostream>
using namespace std;

int DisplayMenuGetChoice(int);
void GoblinSickDays();
int DisplayCoolMessage(int);

int main(){
    int choice, coolMessage = 0;
    do{
        choice = DisplayMenuGetChoice(choice);
        switch(choice){
            case 1:
                GoblinSickDays();
                break;
            case 2:
                coolMessage = DisplayCoolMessage(coolMessage);
                break;
            case 3:
                cout << "\nYou chose to display the cool message " << coolMessage << " times." << endl;
                cout << "\nBye!\n";
                return 0;
                break;
        }
    }while(choice!=3);
    return 0;
}

int DisplayMenuGetChoice(int a){
    cout << "\nWelcome to Gringott's Bank!" << endl;
    cout << "Please choose one of the following options:" << endl;
    cout << "   1 - Enter Goblin Sick Days" << endl;
    cout << "   2 - Display Something Cool" << endl;
    cout << "   3 - End the Program" << endl;
    cout << "Choice: ";
    cin >> a;

    while(a<1 && a>3){
        cout << "Invalid choice. Please choose 1-3." << endl;
        cout << "Choice: ";
        cin >> a;
    }
    return (a);
}

void GoblinSickDays(){
    int numGoblins, sumGoblins, sickDays;
    cout << "\nHow many Goblin tellers worked at Gringotts during each of the last three year?" << endl;
    cin >> numGoblins;

    for(int i=0; i<numGoblins; ++i){
        for(int x=0; x<3; ++x){
            cout << "How many sick days was Goblin " << i+1 << " out for, during year " << x+1 << "? ";
            cin >> sickDays;
            sumGoblins += sickDays;
        }
    }
    cout << "\nThe "<< numGoblins << " Goblins were out sick for a total of " << sumGoblins << " days during the last 3 years" << endl;
}

int DisplayCoolMessage(int a){
    ++a;
    cout << "\n\n";
    cout << " /$$                                                          /$$$$$$                            /$$ /$$                                           /$$" << endl;
    cout << "| $$                                                         /$$__  $$                          | $$| $$                                          | $$" << endl;
    cout << "| $$        /$$$$$$  /$$$$$$/$$$$   /$$$$$$  /$$$$$$$       | $$  \\__/  /$$$$$$   /$$$$$$   /$$$$$$$| $$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$$" << endl;
    cout << "| $$       /$$__  $$| $$_  $$_  $$ /$$__  $$| $$__  $$      | $$       |____  $$ /$$__  $$ /$$__  $$| $$__  $$ /$$__  $$ |____  $$ /$$__  $$ /$$__  $$" << endl;
    cout << "| $$      | $$$$$$$$| $$ \\ $$ \\ $$| $$  \\ $$| $$  \\ $$      | $$        /$$$$$$$| $$  \\__/| $$  | $$| $$  \\ $$| $$  \\ $$  /$$$$$$$| $$  \\__/| $$  | $$" << endl;
    cout << "| $$      | $$_____/| $$ | $$ | $$| $$  | $$| $$  | $$      | $$    $$ /$$__  $$| $$      | $$  | $$| $$  | $$| $$  | $$ /$$__  $$| $$      | $$  | $$" << endl;
    cout << "| $$$$$$$$|  $$$$$$$| $$ | $$ | $$|  $$$$$$/| $$  | $$      |  $$$$$$/|  $$$$$$$| $$      |  $$$$$$$| $$$$$$$/|  $$$$$$/|  $$$$$$$| $$      |  $$$$$$$" << endl;
    cout << "|________/ \\_______/|__/ |__/ |__/ \\______/ |__/  |__/       \\______/  \\_______/|__/       \\_______/|_______/  \\______/  \\_______/|__/       \\_______/" << endl;
    cout << "\n\n";

    return (a);
}