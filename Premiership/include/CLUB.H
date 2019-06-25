//this is the header file for the club class
#ifndef CLUB_H
#define CLUB_H
#include "Player.h"
#include "Manager.h"
#include <stack>
#include <queue>
class Club
{
    public:
        Club();//default constructor
        Club(string, int, int);//overloaded constructor
        Club(int noOfPlayers);//overloaded constructor
        Club(const Club &obj);//copy constructor
        virtual ~Club();//destructor

        void addPlayer();//adds a player to a club
        void addPlayer(string c);//adds a player to a club
        void addManager(string c);//adds a manager to a club

       //setters and getters
        void setTrophiesWon(int t){trophiesWon = t;}
        int getTrophiesWon(){return trophiesWon;}
        void setName(string n){name = n;}
        string getName(){return name;}
        void setLeaguePosition(int p){
            if(p > 0 && p<=20){
                leaguePosition = p;
           }
        }
        int getLeaguePosition(){return leaguePosition;}
        void setNumberOfPlayers(int n){numberOfPlayers = n;}
        int getNumberOfPlayers(){return numberOfPlayers;}

        void printPlayersName();//prints the names of  players added to a club
        void printClubDetails();//prints the details of a club
        friend Club operator+(Club &c1, Club &c2);//overloaded + operator
        friend bool operator<=(Club C1, Club C2);//overloaded <= operator
        void operator=(Club c);//operator overloading
        void display(Club obj);//displays the details of a club
        void saveClubDetails();//saves the details of a club
        void viewClubDetails();//views the details of a club
        void deletePlayer();//deletes a player from a club
        void updatePlayerDetails();//updates the details of a player
        void deleteManager();//deletes a manager from a club
        void updateManagersDetails();//updates the details of a maangers

    protected:

    private:
        //member variables
        string name;
        static int position;
        int leaguePosition;
        int trophiesWon;
        int numberOfPlayers;
        Player** playersArray;//an array of players
        const static int NUM = 22;
        static int num_of_players;
        Manager manager;
        stack<string> playersName;//a vector of players names
        queue<string> managersName;//a vector of managers names
        int *ptr;

};

#endif // CLUB_H
