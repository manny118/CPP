//Author: Emmanuel Akinrintoyo
//Task01
//10/10/2018
//A program that prints out the following series of *
#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;//stores the user input

    for(int i=0; i<input; i++){//the first for loop prints the number of lines required

        for(int j=i+1; j>0; j--){//prints the number of stars on each line

            cout << "*";
    }
    cout << "\n";//this prints the stars on the next line
}

    for(int k=input; k>=0; k--){//prints the second part i.e the decrementing stars

        for(int h=k-1; h>=0; h--){
           cout << "*";
        }
        cout << "\n";

    }

    return 0;
}
