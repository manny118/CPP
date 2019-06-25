#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Song.h"
#include <vector>
#include <stack>
#include <deque>

class Playlist
{
    public:
        Playlist();
        virtual ~Playlist();

        //getters and setters
        void setTotalSongs(int num){totalSongs = num;}
        int getTotalSongs(){return totalSongs;}

        void addNewSong();//adds a new song to the playlist
        void printSongs();//prints the details of a song

       void getMaxSongDuration();//gets the maximum song duration in a playlist
        void addSongToStack(Song &s);
        void deleteSongStack(Song &s);

    protected:

    private:
        vector <Song> songs;
        stack<Song> songStack;
        deque<Song> songQueue;
        int totalSongs;
        const int maxSongDuration = 0;
};

#endif // PLAYLIST_H
