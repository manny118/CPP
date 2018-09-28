//Author: Oluwaseun Akinrintoyo
//19/09/2018
//To calculate resistor values from
//three inputed values

#include <iostream>

using namespace std;

int main()
{
    float resistor1, resistor2, resistor3;

    cout << "Enter a resistor value: " << "\n";
    cin >> resistor1 ;

    cout << "Enter another resistor value: " << "\n";
    cin >> resistor2;

    cout << "Enter the third resistor value" << "\n";
    cin >> resistor3;

    //resistorSeries adds up the resistance values
    float resistorSeries = resistor1 + resistor2 + resistor3;
    float resistorParrallel = 1/((1/resistor1) + (1/resistor2) + (1/resistor3));

    cout << "The total resistance in series is: " << resistorSeries ;
    cout << "The total resistance in parallel is: " << resistorParrallel;

    return 0;
}
