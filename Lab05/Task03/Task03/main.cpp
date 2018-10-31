//Author: Emmanuel Akinrintoyo
//Date: 17/10/2018
//A menu driven program to convert a time in seconds to other units (minutes hours, days and
//years
#include <iostream>

using namespace std;
void convertToHours(int seconds);
void convertToMinutes(int seconds);
void convertToYears(int seconds);
void convertToDays(int seconds);

int main()
{
    int seconds;

    cout << "Enter the number of seconds";
    cin >> seconds;

    char input;
    cout << "Enter your choice: [M], [H], [D], [Y]: " << endl;
    cin >> input;

    switch(input){
        case 'M':
            convertToMinutes(seconds);
            break;
         case 'H':
            convertToHours(seconds);
            break;
        case 'D':
            convertToDays(seconds);
            break;
        case 'Y':
            convertToYears(seconds);
            break;
        default:
            break;
        }


    return 0;
}

void convertToHours(int seconds){
    if(seconds / 3600){
        int hours = seconds/3600;
        cout << "The number of hours is: " << hours;



    }
}

void convertToMinutes(int seconds){
    if(seconds / 60){
        int minutes = seconds/60;
        cout << "The number of minutes is: " << minutes;
    }
}

void convertToYears(int seconds){

}

void convertToDays(int seconds){

}


