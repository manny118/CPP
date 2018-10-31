//Author: Emmanuel Akinrintoyo
//A program that allows the user to enter as many ages of students as needed and finds the oldest
//among them
#include <iostream>

using namespace std;

int main()
{
    int age,currentMax = 0;
    // the user signals for the end of the input by typing -1 for the age,
    while(age != -1){

        cout << "Enter the age of the student: " ;
        cin >> age;


        if(age > currentMax){
            currentMax = age;
        }

    }
    cout << "Oldest age: " << currentMax;

    return 0;
}
