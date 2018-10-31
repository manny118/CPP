//Task01
//Author: Emmanuel Akinrintoyo
//Date: 03/10/18
//This program asks the user to enter a group of five numbers between 1 and 10
//and calculate the average of the numbers.
#include <iostream>
using namespace std;

int main()
{
    float num;//initialises a variable to store the user input
    int total = 0;//stores the sum of the five numbers
    int average;//stores the averga of the numbers

    for(int i=0; i<5; i++){//iteratres 5 times


        do{
            cout << "Enter a number between 1 and 10: \n";
            cin >> num;//stores the user input five times
        }
        while(num<0 || num>10); //checks if the number is between 1 and 10
        total += num;//sums up the total of the numbers


    }

    average = total / 5;//calculates the average of the numbers
    cout << "The average is: " << average;//prints out the average
    return 0;
}




