//this is the .cpp file for the person class
#include "Person.h"
#include "Player.h"

//default constructor
Person::Person()
{
    //ctor
    name = "Unknown";
    lastname = "Unknown";
    gender = 'M';
    salaryEarned = 0;
}

//a virual function
int Person::calcSalary(){

    return getSalaryEarned();
}


Person::~Person()
{
    //dtor
}
