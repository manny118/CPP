//Author: Oluwaseun Akinrintoyo
//Date: 19/09/2018
//A program that converts the age of the user to the number of beats the user has made in its lifetime

#include <iostream>

using namespace std;

int main()
{
    const int minute = 60;
    const int weeks = 52;
    const int days = 7;
    const int hours = 24;
    const int beatsPerMinute = 75;

    int age;

    cout << "How old are you? " << endl ;
    cin >> age;

    float totalHeartBeats = age * weeks * days * hours * minute * beatsPerMinute ;

    cout << "********************************************************** \n";
    cout << "*                                                        * \n";
    cout << "*                                                        * \n";
    cout << "* Your heart has beat " << heartBeats << " times,                *";
    cout << " \n* since birth,                                           * \n";
    cout << "*                                                        * \n";
    cout << "********************************************************** \n";

    return 0;
}




