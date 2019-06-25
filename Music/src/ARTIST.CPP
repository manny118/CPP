#include "Artist.h"
#include <iostream>

Artist::Artist()
{
    //ctor
    salaryEarned = 0;
    noOfSinglesReleased = 0;
}

Artist::Artist(string n, int singles, int sal){
    artistName = n;
    noOfSinglesReleased = singles;
    salaryEarned = sal;
}

Artist::Artist(string n){
    artistName = n;
}

int Artist::calcSalary(){

    return salaryEarned;

}


void Artist::displayArtistDetails(){
    cout << "\nArtist Name: " << getArtistName()
        << "\nNumber of singles released: " << getSinglesReleased()
        << "\nSalary Earned: " << getSalaryEarned() << endl;
}

Artist::~Artist()
{
    //dtor
}
