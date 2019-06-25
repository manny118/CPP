//this is the header file for the song class
#ifndef SONG_H
#define SONG_H
#include <string>
#include "Artist.h"
using namespace std;

class Song
{
    public:
        //constructors
        Song();
        Song(string, string, double);
        Song(string, Artist);
        Song(const Song &obj); //copy constructor
        Song(int d);
        ~Song();

        //setters and getters
        void setName(string n){name = n;}
        void setGenre(string g){genre = g;}

        void setDuration(int dur){
            if(duration > 0){
                duration = dur;
            }
        }

        void setDuration(double dur){
            if(duration > 0){
                duration = dur;
            }
        }

        string getName(){return name;}
        string getGenre(){return genre;}
        double getDuration(){return duration;}
        void printSong();
        void addArtist();

        //overloaded operators
        friend Song operator+(Song &s1, Song &s2);

        friend bool operator<=(Song S1, Song S2);

        void operator=(Song c);

        void display(Song obj);//display function

    protected:

    private://member variables
        string name;
        string genre;
        double duration;
        Artist artist;
        int *ptr;
};

#endif // SONG_H
