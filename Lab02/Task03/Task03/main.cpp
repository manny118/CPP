//Author: OLUWASEUN AKINRINTOYO
//C17455342
//Date: 26/09/2018
//A program that will compute the power dissipation of a resistor where the user input is the
//value of the resistor and the current in the resistor

#include <iostream>

using namespace std;

int main()
{
    int resistorValue;//initialises the resistor variable
    int current;//initialises the current variable

    cout << "Enter the resistor value: " << endl;//prompts the user for the resistor value
    cin >> resistorValue;//assigns the resistor value to the resistorValue variable
    cout << "What is the current in the resistor? " << endl;//prompts the user for the current value
    cin >> current;//assigns the current value to the current variable

    int power = (resistorValue*resistorValue) * current;//P = I*I*R

    if(power > 1){//send a warning and prints the power value if power is greater than 1
        cout << "The power is above one watt" << endl;
        cout << "The total power is : " << power << " watts" << endl;
    }


    return 0;
}
