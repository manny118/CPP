//Author: OLUWASEUN AKINRINTOYO
//C17455342
//Date: 26/09/2018
//Task01
//A program that gets the user input of an integer number between 0 and 10
//and prints an output depending on the input

#include <iostream>

using namespace std;

int main()
{
    int userInput;//initialises a variable that stores the user input
    cout << "Enter an integer between 0 and 10" << endl ;//this accepts the user input
    cin >> userInput; //stores the inputed value in userInput
    cout << "You entered " << userInput << endl;//displays the value entered

    //checks if the inputed value is less than 3
    if(userInput < 3){
        cout << " Less than 3" << endl;
    }
    else if((userInput > 3) && (userInput < 7)){//checks if the inputed value is greater than 3 and less than 7
        cout << "Between 3 and 7" << endl;
        cout << "The square of the number is "  << (userInput * userInput);
    }
    else if(userInput > 10)//checks if the inputed value is greater than 10
        cout << "Greater than 10" << endl;

    return 0;
}
