#include "Playlist.h"
#include <iostream>
#include "Song.h"
Playlist::Playlist()
{
    //ctor
    totalSongs = 0;
}

//adds a song to a playlist
void Playlist::addNewSong(){
    string name, genre;
    int duration; int noOfSongs;

    cout << "How many songs would you like to add? " << endl;
    cin >> noOfSongs;

    if(noOfSongs <= 0){
        cout << "Please enter a valid number.";
    }
    while(noOfSongs > 0){

        cout << "Enter the name, genre, duration of the song" << endl;
        cin >> name;
        cin >> genre;
        cin >> duration;

        Song s1;
        s1.setName(name);
        s1.setGenre(genre);
        s1.setDuration(duration);
        s1.addArtist();

        songs.push_back(s1);//adds the song to a vector
        noOfSongs--;
        totalSongs++;
    }

    cout << "Total songs added: " << totalSongs << endl;

}

void Playlist::getMaxSongDuration(){
    int songDuration=0;int high;int dur;
    for(int i=0;i<totalSongs;i++){
        dur = songs[i].getDuration() ;
        if(dur > songDuration){
            high = dur;
        }
        songDuration = dur;
    }
    cout << "The maximum song duration is: " << high;
}

void Playlist::printSongs(){

   for(int i=0; i<songs.size(); i++){

        songs[i].printSong();
        cout << "\n" ;
   }

}


void Playlist::addSongToStack(Song &s){
    songStack.push(s);
}


void Playlist::deleteSongStack(Song &s){
    songStack.pop();
}


Playlist::~Playlist()
{
    //dtor
}
