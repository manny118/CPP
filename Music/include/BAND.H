//The band class is a child class of the Artist class
#ifndef BAND_H
#define BAND_H
#include "Artist.h"
#include <vector>

class Band : public Artist
{
    public:
        Band();
        Band(int n);
        virtual ~Band();
        void addArtistNames();//adds the name of an artist
        void addArtist();//add all the details of an artist

        void showBand();//displays the names of artists in a band
        void showArtists();//displays the artists details

        void setNumberOfArtists(int no){numberOfArtists = no;}
        int getNumberOfArtists(){return numberOfArtists;}

        virtual int calcSalary();

    protected:

    private:
        int numberOfArtists;
        vector<string> names;//stores artists names
        vector<Artist> artists;//stores artists details
        vector<int> totalSalary;
};

#endif // BAND_H
