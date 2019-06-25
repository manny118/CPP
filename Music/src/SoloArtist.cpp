#include "SoloArtist.h"
#include <iostream>

SoloArtist::SoloArtist()
{
    //ctor
}

void SoloArtist::printArtistDetails(){
    if(getHasBackingBand() == true){
        cout << "Has a backing band " << endl;
    }
    else{
        cout << "Has no backing band " << endl;
    }
}

int SoloArtist::calcSalary(){

    if(getHasBackingBand() == true){
        return  getSalaryEarned() * 10;
    }
    else{
        return  getSalaryEarned();
    }
}


SoloArtist::~SoloArtist()
{
    //dtor
}
