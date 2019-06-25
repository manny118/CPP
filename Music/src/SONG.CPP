//this class is used to create song objects
#include "Song.h"
#include "string"
#include <iostream>

Song::Song()
{
    //ctor
    cout << "Constructor is executed " << endl;
}

Song::Song(string an, Artist a){//not used
    name = an;
}


Song::Song(int dur){
     //int ptr;
    cout << "Normal constructor allocating ptr" << endl;//allocate memory for the pointer
     ptr = new int;
    *ptr = dur;
    setDuration(dur);
}

Song::Song(const Song &obj){//copy constructor
    // int ptr;
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr;//copy the value
    setDuration(*ptr);
}

Song::Song(string n, string g, double d){//overloaded constructor
    name = n;
    genre = g;
    duration = d;
}

Song operator+(Song &s1,  Song &s2){//overloaded + operator
    double duration  = s1.getDuration() + s2.getDuration();
    Song s3;
    s3.setDuration(duration);
    return  s3;
}

Song::~Song(){
    //dtor
    cout << "\nDestrutor is executed " << endl;
}

void Song::operator=(Song c){//overloaded = operator
    cout << "Copy assignment" << endl;
    duration = c.getDuration();
}


bool operator<=(Song S1, Song S2){//overloaded <= operator
    return S1.getDuration()<=S2.getDuration();
}

void Song::addArtist(){//this function adds an artist to a song
    string n; int singles; int sal;
    cout << "Please enter the details of the Artist:  NAME, SINGLES and SALARY" << endl;
    cin >> n;
    cin >> singles;
    cin >> sal;
    artist.setArtistName(n);
    artist.setSalaryEarned(sal);
    artist.setSinglesReleased(singles);
    //(n, singles, sal);
}

//this function prints the details of the song
void Song::printSong(){
    cout << "\nSong name: " << getName() << "\nGenre: " << getGenre() << "\nDuration: " << getDuration() << "\nArtist name: " << artist.getArtistName() << "\nSingles released: " << artist.getSinglesReleased() << "\nSalary: " << artist.getSalaryEarned() << endl;
}

//displays the duration of the a song object using the copy constructor
void display(Song obj){
    cout << "Duration: " << obj.getDuration() << endl;
}
