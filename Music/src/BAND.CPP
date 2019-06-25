#include "Band.h"
#include <iostream>
Band::Band()
{
    //ctor
    Artist();
}


void Band::addArtistNames(){

    int num;
    string n;
    cout << "How many artists would you like to add to the band: " << endl;
    cin >> num;
    if(num <= 0){
        cout << "Invalid input" << endl;
    }
    else{
        while(num > 0){
            cout << "Enter artist name: " << endl;
            cin >> n;
            names.push_back(n);
            num--;
        }
    }

}


int Band::calcSalary(){

    return getSalaryEarned() * numberOfArtists;
}


void Band::showBand(){
    for(int i=0; i<names.size();i++){
        cout << "Names: " << names[i] << endl;
    }
}


void Band::addArtist(){
    string n;
    int num, singles;double sal;
    cout << "How many artists would you like to add to the band: " << endl;
    cin >> num;

    if(num <= 0){
        cout << "Invalid input" << endl;
    }

    else{
        while(num > 0){
            cout << "Enter artist name: " << endl;
            cin >> n;
            cout << "Enter singles released: " << endl;
            cin >> singles;
            cout << "Enter salary earned: " << endl;
            cin >> sal;

            Artist a;
            a.setArtistName(n);
            a.setSalaryEarned(sal);
            a.setSinglesReleased(singles);
            artists.push_back(a);
            totalSalary.push_back(sal);
            num--;
        }
    }

}


void Band::showArtists(){
    for(int i=0; i<artists.size();i++){
        cout << "\nName: " << artists[i].getArtistName()
            << "\nSingles: " << artists[i].getSinglesReleased()
            << "\nSalary: " << artists[i].getSalaryEarned();
    }
}

Band::~Band()
{
    //dtor
}
