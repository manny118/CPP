//Author: Oluwaseun Akinrintoyo
//Date: 19/09/2018
//A program that accepts a temperature in degrees Fahrenheit and converts it to degrees Celsius

#include <iostream>

using namespace std;

int main()
{
    float tempFahrenheit; //tempFahrenheit is a variable which stores the user input
    cout << "Enter a temperature in degrees Fahrenheit: " ; //this prompts the user to enter a temperature value
    cin >> tempFahrenheit; //the inputed value is stored in tempFahrenheit

    float celsius = (tempFahrenheit - 32.0)*(5.0/9.0); //this converts the degrees in Fahrenheit to Celsius
    cout << "The temperature in celsius is: " << celsius << " degrees celsius";//the result is printed out to the user
    return 0;
}
