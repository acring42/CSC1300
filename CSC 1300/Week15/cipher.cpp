#include <iostream>
using namespace std;

int main(){
    string msg;
    int choice, key;
    char ch;

    cout << "Enter your choice" << endl;
    cout << "1. Encryption" << endl;
    cout << "2. Decryption" << endl;
    cin >> choice;
    cin.ignore();

    cout << "Enter the message:" << endl;
    getline(cin, msg);
    cout << "Enter Key: ";
    cin >> key;
    cin.ignore();

    switch(choice){
        case 1:
            for(int i=0; msg[i] != '\0'; i++){
                ch = msg[i];
                if(ch >= 'a' && ch <= 'z'){
                    ch = ch + key;
                    if(ch > 'z')
                        ch = ch - 'z' + 'a' - 1;
                    msg[i] = ch;
                }
                else if(ch >= 'A' && ch <= 'Z'){
                    ch = ch + key;
                    if(ch > 'Z')
                        ch = ch - 'Z' + 'A' - 1;
                     msg[i] = ch;
                }
            }
            cout << "Encrypted message: " << msg << endl;
            break;
        case 2:
            for(int i=0; msg[i] != '\0'; i++){
                ch = msg[i];
                if(ch >= 'a' && ch <= 'z'){
                    ch = ch - key;
                    if(ch < 'a')
                        ch = ch + 'z' - 'a' + 1;
                    msg[i] = ch;
                }
                else if(ch >= 'A' && ch <= 'Z'){
                    ch = ch - key;
                    if(ch < 'A')
                        ch = ch + 'Z' - 'A' + 1;
                    msg[i] = ch;
                }
                
            }
            cout << "Decrypted message: " << msg << endl;
            break;
    }
    return 0;
}