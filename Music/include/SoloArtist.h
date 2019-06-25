//SoloArtist inherits from the Artist class
#ifndef SOLOARTIST_H
#define SOLOARTIST_H
#include "Artist.h"

class SoloArtist:public Artist
{
    public:
        SoloArtist();
        virtual ~SoloArtist();

        void setHasBackingBand(bool b){hasBackingBand = b;}
        bool getHasBackingBand(){return hasBackingBand;}

        void printArtistDetails();

        virtual int calcSalary();

    protected:

    private:
        bool hasBackingBand;
};

#endif // SOLOARTIST_H
