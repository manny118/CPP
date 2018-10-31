//Task02
//Author: Emmanuel Akinrintoyo
//Date: 03/10/18
//Prompt the user for two numbers: a value and a limit
//Print out a list of multiples of value up to the limit.

#include <iostream>

using namespace std;

int main()
{
    int num;//a variable that stores the number
    int limit;//the limit entered by the user
    int result;//this stores the mutliples
    int increment = 1;//a counter

    cout << "Enter a number" ;
    cin >> num;//user input is stored into num
    cout << "Enter the limit" ;
    cin >> limit;//limit is stored

    do{

        result = num * increment;
        increment++;
        cout << "\n" << result;
    }
    while(result <= limit);

    return 0;
}
