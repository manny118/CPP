//this is the header file for the manager class
#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include "Person.h"
using namespace std;

//inheritance from the Person class
class Manager:public Person
{
    public:
        Manager();//default constructor
        virtual ~Manager();//destructor

        //setters and getters
        void setExperienceLevel(int e){
            if( (e >= 1) && (e <=3) ){//checks if the experience level is between 1 and 3
                experience = e;
            }
        }
        int getExperienceLevel(){return experience;}
        void setStyle(int s){style = s;}
        int getStyle(){return style;}


        void printManagerDetails();//prints the details of a manager
        virtual int calcSalary();//calculates the salary of a manager
        void saveManagerDetails(string c);//saves the details of a manager
        void viewManagerDetails();//displays the details of a manager

    protected:

    private:
        //member variables
        int experience;//1-3
        int style;//attack/defense
};

#endif // MANAGER_H
