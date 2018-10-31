//Task03
//Author: Emmanuel Akinrintoyo
//Date: 03/10/18
//A program that accepts user tries to guess the magic number stored in a computer
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   srand(time(0));
    int num = (rand()%4)+2;//generates a random number between 2 and 4
    int guess;//stores the user input
    int attempts = 0;//counts the number of attempts made by the user

    do{
        cout << "Enter a number: \n" ;
        cin >> guess;
        attempts++;
    }
    while(num != guess);//checks if the guess is correct
    cout << "Right answer, correct!!";
    cout << "You made: " << attempts << " attempts";//prints the number of attempts made
    return 0;
}
