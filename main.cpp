//Author: Emmanuel Akinrintoyo
//C17455342
//Date: 26/09/2018
//Task05
//A program that starts with a quantity in mph and converts the quantity into
//minutes and seconds per mile
#include <iostream>

using namespace std;

int main()
{
    int mph;
    cout << "Enter the speed(in mph)" << endl;
    cin >> mph;

    double minutes = 60/mph;
    double seconds = (double)(mph%60);

    cout << "Minutes" << minutes << " Seconds" << seconds << endl;

    return 0;
}
