//this class is used for separation of functionalities
////the header file for the login class
#ifndef LOGIN_H
#define LOGIN_H
#include "Club.h"

class Login
{
    public:
        Login();//constructor
        virtual ~Login();//destructor

        void homeScreen();//displays the homescreen
        void addClub();//used for adding clubs to the premiership
        void refresh();//refreshes the display

        void addMem();//a function to add a player or manager
        void clubMenu();//displays the club's menu
        void editDetails(char in);//a function for editing details
        void deleteDetails(char in);//a function for deleting entered details

    protected:

    private:

};

#endif // LOGIN_H
