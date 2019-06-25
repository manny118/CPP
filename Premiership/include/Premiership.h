//this is the header file for the premiership class
#ifndef PREMIERSHIP_H
#define PREMIERSHIP_H
#include "Club.h"
#include <vector>
class Premiership
{
    public:
        Premiership();//default constructor

        virtual ~Premiership();//destructor

        void addClub();//adds a club to the premiership
        void addClub(Club &c);//method overloading
        void printPremiership();//prints the clubs in the premiership
        void deleteClub();//deletes a club
        void updateClub();//updates the deatails of a club


    private:
        const int noOfClubs = 20;//20 is the max number of clubs
        Club club;
        vector<Club> clubs;//a vector of clubs
};

#endif // PREMIERSHIP_H
