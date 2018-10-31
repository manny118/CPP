//Author: Emmanuel Akinrintoyo
//Date: 17/10/2018
//A function that takes in two numbers n and s and verifies that n divides exactly by n
#include <iostream>

using namespace std;

//prototypes
void dividesExactly(int n, int s);
void displayVerses(int n, int s);

int main()
{
    int num1, num2;//initialises two vairiables to store n and s values

    cout << "Please enter a value for n" << endl;
    cin >> num1;

    cout << "Please enter a value for s" << endl;
    cin >> num2;

    dividesExactly(num1, num2);
    return 0;

}

//implementation
void dividesExactly(int n, int s){

    int value;//declares the value variable

    if((n % s)==0){//checks if n is divisible by s
        cout << "The numbers divide exactly" << endl;
        while(s < n)
        {
            value = n/s;
            displayVerses(n ,s);//calls the second funtion
            n = n - s;//decrements n by s
        }
    }
}

//implementation
void displayVerses(int n, int s){
    cout << n << " green bottles hanging on the wall," << endl;
    cout << n << " green bottles hanging on the wall,"<< endl;
    cout << "\nIf " << s<< " green bottles were to accidentally fall, \nThere's be  " << n - s << " green bottles hanging on the wall";
    cout << "\n";
}

