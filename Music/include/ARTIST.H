#ifndef ARTIST_H
#define ARTIST_H
#include <string>
using namespace std;
class Artist
{
    public:
        Artist();
        Artist(string n, int singles, int sal);
        Artist(string n);
        virtual ~Artist();

        //getters and setters
        void setArtistName(string n){artistName = n;}
        string getArtistName(){return artistName;}
        void setSinglesReleased(int a){noOfSinglesReleased = a;}
        int getSinglesReleased(){return noOfSinglesReleased;}
        void setSalaryEarned(int salary){
            if(salary >= 0){
                salaryEarned = salary;
            }
        }
        int getSalaryEarned(){return salaryEarned;}
        void displayArtistDetails();

        virtual int calcSalary();

    protected:

    private:
        string artistName;
        int noOfSinglesReleased;
        int salaryEarned;
};

#endif // ARTIST_H
