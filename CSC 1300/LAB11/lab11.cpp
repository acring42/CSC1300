#include <iostream>
using namespace std;

struct Player{
    string name, homeTown;
    int age, numGames;
};

int maxPlayer, minPlayer;

int main(){
    int size, total[size];
    cout << "How many esports players are there at TTU who major in CSC?" << endl;
    cin >> size;

    Player *player = new Player[size];
    int **hours = new int*[size];
    
    cout << "Please enter in information about each player:" << endl;
    for(int i=0; i<size; i++){
        cout << "Player " << i+1 << ":" << endl;
        cout << "\tNAME: ";
        cin.ignore();
        getline(cin, (player+i)->name);
        cout << "\tHOMETOWN: ";
        getline(cin, (player+i)->homeTown);
        cout << "\tAGE: ";
        cin >> (player+i)->age;
        cout << "\tHOW MANY GAMES DOES " << (player+i)->name << " PLAY? ";
        cin >> (player+i)->numGames;

        hours[i] = new int[(player+i)->numGames];
        for(int x=0; x<(player+i)->numGames; x++){
            cout << "\t\tNUMBER OF HOURS " << (player+i)->name << " PLAYED GAME " << x+1 << ": ";
            cin >> hours[i][x];
        }
    }

    int max = hours[0][0], min = hours[0][0];
    for(int i=0; i<size; i++){
        total[i] = 0;
        for(int x=0; x<(player+i)->numGames; x++){
            total[i] += hours[i][x];
            if(max < total[i]){
                max = total[i];
                maxPlayer = i;
            }
            if(min > total[i]){
                min = total[i];
                minPlayer = i;
            }

        }
        
    }
    for(int i=0; i<size; i++){
        cout << "Total " << i << ": " << total[i] << endl;
    }
    cout << "The player with the most hours was " << player[maxPlayer].name << " with (" << max << " hours)" << endl;
    cout << "The player with the least hours was " << player[minPlayer].name << " with (" << min << " hours)" << endl;

    for(int i=0; i<size; i++)
        delete [] hours[i];
    delete [] hours;
    delete [] player;

    return 0;
}