//Author: OLUWASEUN AKINRINTOYO
//C17455342
//Date: 26/09/2018
//A program that displays the effects of an earthquake based on the Richter scale value
#include <iostream>

using namespace std;

int main()
{
    double userInput;
    cout << "Enter the Richter scale value: " << endl ;//this accepts the user input
    cin >> userInput; //stores the inputed value in userInput
    cout << "You entered: " << userInput << endl;//displays the value entered

    //checks if the user input is less than 4
    if(userInput < 4)
        cout << "Effects: Little" << endl;

    else if((userInput >= 4.0) && (userInput <= 4.9))//checks if the user input is greater than 4 and less than 4.9
        cout << "Effects: Windows shake" << endl;

    else if((userInput >= 5.0) && (userInput <= 5.9))//checks if the user input is greater than 5 and less than 5.9
        cout << "Effects: Walls crack; Poorly built buildings are damaged" << endl;

    else if((userInput >= 6.0) && (userInput <= 6.9))//checks if the user input is greater than 6 and less than 6.9
        cout << "Effects: Chimneys tumble, ordinary buildings are damaged" << endl;

    else if((userInput >= 7.0) && (userInput <= 7.9))//checks if the user input is greater than 7 and less than 7.9
        cout << "Effects: Underground pipes break; well build buildings are damaged" << endl;

    else if(userInput > 7.9)//checks if the user input is greater than 7.9
        cout << "Ground rises and falls in waves; most buildings are destroyed" << endl;

    return 0;
}
