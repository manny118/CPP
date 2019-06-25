//the Login class is used for separation of functionalities
#include "Login.h"
#include <iostream>
#include "Club.h"
#include "Premiership.h"
#include <stdlib.h>
#include "windows.h"
using namespace std;

Login::Login()
{
    //ctor
}

//allows the user to add a new club
void Login::addClub(){
    string n;
    int t,  no;
    Club *c;
    char in;
    char check = 'y';
    char cont;

    cout << "Enter NAME,  TROPHIES_WON, NUMBER_OF_PLAYERS  " << endl;
    cin >> n;
    cin >> t;
    cin >> no;

    c = new Club(n, t, no);
    c->saveClubDetails();
    cout << "Added successfully" << endl;

}

//displays the login homescreeen
void Login::homeScreen(){
    char input;
    cout <<  "                               Main Menu       " << endl;
    cout << "Thank you for using our system today" << endl;
    cout << "Please choose one of the following options: \n1. Enter [C] for club menu \n2. Enter [V] to view registered clubs \n3. Enter [P] to view registered players \n4. Enter [M] to view registered managers \n5. Enter [X] To exit" << endl;
    cin >> input;

    if(tolower(input) == 'c'){
        system("CLS");
        clubMenu();
    }

    else if(tolower(input) == 'v'){//V TO VIEW CLUBS DETAILS
        Club *c;
        c->viewClubDetails();
        refresh();
    }

    else if(tolower(input) == 'x'){//X TO EXIT
        cout << "\nBye for now" << endl;
    }

    else if(tolower(input) == 'p'){//P TO VIEW PLAYERS DETAILS
        Player *p;
        p->viewPlayerDetails();
    }

    else if(tolower(input) == 'm'){//M TO VIEW MANAGERS DETAILS
        Manager *m;
        m->viewManagerDetails();
    }

    else{
        refresh();
    }
}



//displays the club's menu
void Login::clubMenu(){
    int password;
    char input;
    bool isLogged = false;
    int attempts = 0;
    cout <<  "                               Club Menu       " << endl;

    while(attempts < 3){//the aadmin has thrree password attempts
        cout << "Please enter password to continue: " ;
        cin >> password;

        if(password == 1234){//checks the inputted password
            isLogged = true;
            cout << "Login successful" << endl;
            system("CLS");

            cout << "Choose an option below: " << endl;
            cout << "\n1. Enter [R] to register a club \n2. [D] to delete a club \n3. [U] to update a club's details  \n4. [A] to add a player or manager  \n5. [P] to delete a player  \n6. [N] to delete a manger \n7. [L] to update a player's details \n8. [K] to update a manager's details   \n9. [M] to return to main menu " << endl;
            cin >> input;

            if(tolower(input) == 'r'){
                addClub();
                system("CLS");
                clubMenu();
            }

            else if(tolower(input) == 'a'){
                system("CLS");
                addMem(); //cout << "got here";
            }

            else if(tolower(input) == 'n'){
                system("CLS");
                deleteDetails('n');
            }

            else if(tolower(input) == 'd'){
                system("CLS");
                deleteDetails('d');

            }

            else if(tolower(input) == 'u'){
                system("CLS");
                editDetails('u');

            }

            else if(tolower(input) == 'l'){
                system("CLS");
                editDetails('l');
            }

            else if(tolower(input) == 'k'){
                system("CLS");
                editDetails('k');
            }

            else if(tolower(input) == 'p'){
                system("CLS");
                deleteDetails('p');
            }

            else if(tolower(input) == 'm'){
                refresh();
            }

            //refreshes the display
            Sleep(1300);
            system("CLS");
            clubMenu();
        }

        if(attempts == 2){//checks the number of attempts
            cout << "Number of attempts exceeded! Good bye." << endl;
            break;
        }

        attempts++;

    }

}



//a function for editing details
void Login::editDetails(char in){
    Club *cc;
    Premiership *pp;

    if(tolower(in) == 'u'){//U TO UPDATE DETAILS OF CLUB
        pp->updateClub();
    }

    else if(tolower(in) == 'l'){//L UPDATE DETAILS OF A PLAYER
        cc->updatePlayerDetails();
    }

    else if(tolower(in) == 'k'){//K UPDATE DETAILS OF A MANAGER
        cc->updateManagersDetails();
    }

}



//a function for deleting entered details
void Login::deleteDetails(char in){
    Club *cc;
    Premiership *pp;

    if(tolower(in) == 'd'){//D TO DELETE A CLUB
        pp->deleteClub();
    }

    else if(tolower(in) == 'p'){//P TO DELETE PLAYER
        cc->deletePlayer();
    }

    else if(tolower(in) == 'n'){//N  DELETE MANAGER
        cc->deleteManager();
    }

}




//to add a member of the club
void Login::addMem(){
    Club *c;
    string n;
    char input;

    cout << "Please enter club's name: " ;
    cin >> n;

    cout << "Please choose one of the following options below: " << endl;
    cout << "[A] to add a player \n[M] to add manager " << endl;
    cin >> input;

    if(tolower(input) == 'a'){
        c->addPlayer();
    }

    else if(tolower(input) == 'm'){
        c->addManager(n);
    }

}



//this functions refreshes the display
void Login::refresh(){
    Sleep(2000);
    system("CLS");
    homeScreen();
}

Login::~Login()
{
    //dtor
    cout << "Destructor is executed" << endl;
}
