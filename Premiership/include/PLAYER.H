//this is the header file for the Player class
#ifndef PLAYER_H
#define PLAYER_H
#include "Person.h"
#include <string>


//inheritance from the Person class
class Player : public Person
{
    public:
        Player();//default constructor
        Player(string n);//overloaded constructor
        Player(string n, string l, int,  char gen, int skill, int sal);//overloaded constructor
        ~Player();//destructor

        //setters and getters
        void setSkillLevel(int s){skillLevel = s;}
        void setSkillLevel(double s){skillLevel = s;}
        double getSkillLevel(){return skillLevel;}

        void printPlayerDetails();//prints the details of a player
        void savePlayerDetails(string c);//saves the details of a player
        void viewPlayerDetails();//displays the details of a player
        virtual int calcSalary();//calculates the salary of a player
        int getPlayerID(){return ID;}//returns the ID of a player

    protected:

    private:
        //member variables
        double skillLevel;//1-5
        int jerseyNo;
        static int ID;
};

#endif // PLAYER_H
