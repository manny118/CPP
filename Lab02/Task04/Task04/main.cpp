//Author: OLUWASEUN AKINRINTOYO
//C17455342
//Date: 26/09/2018
//Task04
//A program to score the paper-rock-scissor game

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int counter1=0, counter2=0;
    bool isPlay = true;
    char user1;
    char user2;
    char playOption;


    do{
        cout << "Would you like to play paper-rock-scissor game: y or n" << endl;
        cout << "Player 1: Enter P, R, S" << endl;
        cin >> user1;
        cout << "Player 2: Enter P, R, S" << endl;
        cin >> user2;

        if((user2 == 'p'||user2=='P') && (user1 == 'r'||user1=='R')){
            cout << "User2 wins!" << endl;
            counter2++;
        }
        else if((user2 == 'r'||user2 == 'R') && (user1 == 'p'||user1 == 'P')){
            cout << "User1 wins!" << endl;
            counter1++;
        }
        else if((user2 == 's' || user2 == 'S' )&& (user1 == 'p'||user1 == 'P')){
            cout << "User2 wins!" << endl;
            counter2++;
        }
        else if((user2 == 'p' || user2 == 'P')&& (user1 == 's' || user1 == 'S')){
            cout << "User1 wins!" << endl;
            counter1++;
            }

        else if((user2 == 's'||user2 == 'S') && (user1 == 'r'||user1=='R')){
            cout << "User1 wins!" << endl;
            counter1++;
        }
        else if((user2 == 'r' || user2 == 'R')&& (user1 == 's'||user1 == 'S')){
            cout << "User2 wins!" << endl;
            counter2++;
        }

        i++;
        if(i == 3){

            cout << "\nFinal score \nUser1: " << counter1 << "\nUser2: " << counter2 << endl;
            if(counter1 > counter2)
                cout << "User1 wins!" << endl;
            else if(counter1 < counter2)
                cout << "User2 wins!" << endl;
            else
                cout << "Nobody wins!" << endl;
        }

        cout << "Would you like to play paper-rock-scissor game: y or n" << endl;
        cin >> playOption;
        if(playOption == 'y')
            isPlay = true;
        else
            isPlay = false;
        }

    while(isPlay);

    return 0;
}
