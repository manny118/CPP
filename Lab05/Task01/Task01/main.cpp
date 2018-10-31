//Author: Emmanuel Akinrintoyo
//Date: 17/10/2018
//A function that displays at the left margin of the screen a solid square of asterisks
#include <iostream>

using namespace std;

//prototypes
void printAskterisks(int);


int main()
{
    int num;
    cout << "Please enter a number: " << endl;
    cin >> num;
    //use
    printAskterisks(num);//passes a parameter into the method

    return 0;
}

//implementation
void printAskterisks(int noOfCols){

    for(int i=0; i<noOfCols; i++){//loops for the number of rows

        for(int j=0; j<noOfCols; j++){//a loop for the column
            cout << "*";
        }
        cout << "\n";

    }


}
