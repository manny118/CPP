//Author: Emmanuel Akinrintoyo
//Task02
//10/10/2018
//A program to calculate the height of a building
#include <iostream>

using namespace std;

int main()
{

    int noOfTimes, time;
    float height, totalHeight, averageHeight;
    static float g = 9.81;
    int counter = 0;


    cout << "How many times did you conduct the test: ";
    cin >> noOfTimes;//stores the number of times the test was conducted

    while(noOfTimes > 0){

        cout << "Enter the time taken: ";
        cin >> time;//stores the time taken for each test

        counter++;
        noOfTimes--;//decrements the number of times the test was carried out
        height = 0.5 * (g * time* time);//calculates the height
        totalHeight += height;//sums up the heights

    }

    averageHeight = totalHeight/counter;
    cout << "The height in meters is : " << averageHeight << " meters";
    return 0;
}
