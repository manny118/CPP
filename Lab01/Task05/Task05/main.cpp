//Author: Oluwaseun Akinrintoyo
//Date: 19/09/2018
//A program that converts Euros to Dollars
#include <iostream>

using namespace std;

int main()
{
    float euros;
    float dollars;

    cout << "Enter the amount in euros: " ;
    cin >> euros; //Assigns the input to the variable euros

    dollars = euros * 1.17 ;//this converts the amount in euros to dollars

    cout << "The amount in dollars is: " << dollars;

    return 0;
}
