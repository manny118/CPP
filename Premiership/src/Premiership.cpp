//this is the .cpp file for the premiership class
#include "Premiership.h"
#include "Club.h"
#include <fstream>
#include  <string.h>
using namespace std;

Premiership::Premiership()
{
    //ctor
}

//adds a club using pass by reference
void Premiership::addClub(Club &c){

    clubs.push_back(c);

}

//adds a new club to the league
void Premiership::addClub(){
    int n;
    string name;
    int trophies;
    int numberOfPlayers;

    fstream stud;
    stud.open("clubs.txt", ios::app);

    cout << "Enter number of clubs: " << endl;
    cin >> n;

    while((n > 0) && (n <= noOfClubs)){
        cout << "Enter club details (NAME, TROPHIES WON, NUMBER OF PLAYERS): " << endl;
        cin >> name;        //cin >> position;
        cin >> trophies;
        cin >> numberOfPlayers;
        Club club(name, trophies, numberOfPlayers);
        clubs.push_back(club);
        n--;

        stud <<  name<<'|'<<trophies<<'|'<<numberOfPlayers  <<    '\n';
        cout<< "done !";
        stud.close();

    }
}


//deletes a club
void Premiership::deleteClub(){
    fstream stud;
    fstream temp;

    stud.open("clubs.txt",ios::in);
    temp.open("temp.txt",ios::out);

    char name [25];
    char trop[25];
    char no[25];
    char a[25];
    cin.ignore();
    cout<<" \n\t enter the name of the club to delete record : ";
    cin.getline(a,25);
    while(!stud.eof())
    {
        stud.getline(name,25,'|');
        stud.getline(trop,25,'|');
        stud.getline(no,25);
        if(strcmp(name,a)==0)
        {
            continue;
        }
        else
        {
            temp<< name<<'|'<<trop<<'|'<<no<<'\n';
        }
    }
    temp.close();
    stud.close();

    stud.open("clubs.txt",ios::out);
    temp.open("temp.txt",ios::in);

    while(!temp.eof())
    {
        temp.getline(name,25,'|');
        temp.getline(trop,25,'|');
        temp.getline(no,25);
        stud<< name<<'|'<<trop<<'|'<<no<<'\n';
    }

    temp.close();
    stud.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";
}



//updates the deatails of a club
void Premiership::updateClub(){
    fstream stud;
    fstream temp;

    stud.open("clubs.txt",ios::in);
    temp.open("temp.txt",ios::out);

    char n[25];
    char trop[25];
    char no[25];
    char a[25];

    cin.ignore();
    cout<<" \n\t enter the club name to update record : ";
    cin.getline(a,25);

    while(!stud.eof())
    {
        stud.getline(n,25,'|');
        stud.getline(trop,25,'|');
        stud.getline(no,25);

        if(strcmp(n,a)==0)//strcmp compares two strings
        {
            cout << "Enter club's details (NAME, TROPHIES WON, NUMBER OF PLAYERS): " << endl;
            cin >> n;
            cin >> trop;
            cin >> no;
            temp<< n<<'|'<<trop<<'|'<<no<<'\n';
        }
        else
        {
            temp<< n<<'|'<<trop<<'|'<<no<<'\n';
        }
    }
    temp.close();
    stud.close();

    stud.open("clubs.txt",ios::out);
    temp.open("temp.txt",ios::in);

    while(!temp.eof())
    {
        temp.getline(n,25,'|');
        temp.getline(trop,25,'|');
        temp.getline(no,25);
        stud<< n<<'|'<<trop<<'|'<<no<<'\n';
    }

    temp.close();
    stud.close();
    remove("temp.txt");
    cout<<"\n done !!! \n";

}


//prints the details of all the clubs in the league
void Premiership::printPremiership(){

    //this loops through the vector of clubs
    for(int i=0; i<clubs.size(); i++){

        clubs[i].printClubDetails();//this calls the printClubDetails function in the Club class

    }

}

Premiership::~Premiership()
{
    //dtor
}
