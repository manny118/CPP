#include <iostream>
#include "Song.h"
#include "Artist.h"
#include "Playlist.h"
#include "Band.h"
#include "SoloArtist.h"
using namespace std;
void display(Song);
int main()
{
    //string name, genre;
  //  int duration;


  /*  Song s1;//creates an instance of Song
    s1.setName("Fly");//calls the setName function
    s1.setDuration(3);//calls the setDuration function
    s1.setGenre("Blues");//calls the setGentr function
    cout << "Name: " << s1.getName() << "\nDuration: " << s1.getDuration() << "\nGenre: " << s1.getGenre() << endl;

    cout << "\nPlease enter song name" << endl;
    cin >> name;
    cout << "Genre: ";
    cin >> genre;
    cout << "Duration: ";
    cin >> duration;

    Song s2(name, genre, duration);
    s2.addArtist();
    s2.printSong();*/
    //prints the details of the song
/*
    Artist artist1;
    artist1.setName("Travis");
    artist1.setSinglesReleased(23);
    artist1.setSalaryEarned(255000);
    artist1.displayArtistDetails();
*/
/*
    Playlist p1;
    p1.addNewSong();
    p1.printSongs();
    p1.getMaxSongDuration();
*/
//
    //Band b;
    //
    //b.addArtist();
   //
   //b.showArtists();
   // b.addArtistNames();
   // b.showBand();
    //b.setSalaryEarned(120);
    //int sal = b.calcSalary();
    //cout << "Sal: " << sal;

    /* SoloArtist solo;
    solo.setHasBackingBand(true);
    solo.printArtistDetails();
    solo.setSalaryEarned(200);
    int sal = solo.calcSalary();
    cout << "Sal: " << sal;*/


/*
    Artist artist1;
    artist1.setArtistName("Travis");
    artist1.setSinglesReleased(23);
    artist1.setSalaryEarned(2550);
    artist1.displayArtistDetails();

    Song song("Hey", "Pop", 4.17);
    song.printSong();

    Song s2("Jump" , "Blues", 3.35);
    s2.printSong();

    //Song s  = operator+(s2, song);
    Song s  = s2 + song;
    cout << s.getDuration();
*/
    Song song10(6);
    display(song10);
    Song song = song10;
    display(song);

/*
    Song ss1, ss2;
    ss1.setDuration(400.0);
    ss2.setDuration(400.0);

    if(ss1 <= ss2){
        cout << "ss1 < = ss2" << endl;
    }
    else{
        cout << "Not less" << endl;
    }

    Song();
    Song ss3;
    ss3.~Song();//explicit call to destructor

*/
    //polymorphism
    Artist *aa;
    Band sn;
    sn.setSalaryEarned(100);
    aa = &sn;
    cout << aa->getSalaryEarned();

    return 0;
}


