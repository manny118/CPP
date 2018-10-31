//Author: Emmanuel Akinrintoyo
//Date: 28/10/2018
//A menu driven program that allows users to calculate the difference in two times
//and to convert to cents
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
void timeDifference();
void checkNum(int);
void toFiftyCent(int);
void toTwentyCent(int);
void toTenCent(int input);
void toFiveCent(int input);
void toTwoCent(int input);
void toOneCent(int input);
void convertToCents();


//checks if there's a 50c
void toFiftyCent(int input)
{
    int remainder, numOfFifty;
    numOfFifty = input/50;
    remainder = input%50;
    cout << numOfFifty << " 50 cent\n";
    if(remainder > 0){
        checkNum(remainder);
    }
}

//prints the number of 20c
void toTwentyCent(int input)
{
    int remainder, numOfTwenty;
    numOfTwenty = input/20;
    remainder = input%20;
    cout << numOfTwenty << " 20 cent\n";
    if(remainder > 0){
        checkNum(remainder);
    }
}

//prints the number of 10c
void toTenCent(int input)
{
    int remainder, numOfTen;
    numOfTen = input/10;
    remainder = input%10;
    cout << numOfTen << " 10 cent\n";
    if(remainder > 0){
        checkNum(remainder);
    }

}

//prints the number of 5c
void toFiveCent(int input){
    int remainder, numOfFive;
    numOfFive = input/5;
    remainder = input%5;
    cout << numOfFive << " 5 cent\n";
    if(remainder > 0){
        checkNum(remainder);
    }
}

//prints the number of 2c
void toTwoCent(int input){
    int remainder, numOfFive;
    numOfFive = input/2;
    remainder = input%2;
    cout << numOfFive << " 2 cent\n";
    if(remainder > 0){
        checkNum(remainder);
    }
}

//prints the number of 1c
void toOneCent(int input){
    cout << input << " 1 cent\n";
}

//checks the number of cents inputed
void checkNum(int num){
    if(num > 0 && num < 99){
            if(num >= 50)
                toFiftyCent(num);
            else if (num >= 20)
                toTwentyCent(num);
            else if (num >= 10)
                toTenCent(num);
            else if(num >= 5)
                toFiveCent(num);
            else if(num >= 2)
                toTwoCent(num);
            else if(num >= 1)
                toOneCent(num);
    }
}

int main()
{
    char response ;
    cout << "Would you like to calculate the difference in two times or covert to cents?" << endl;
    cout << "Enter [T] or [C]: " ;
    cin >> response;

    if(response == 'T'){
        cout << "\nYou have chosen to calculate the difference in two times" << endl;
        timeDifference();
    }
    else if(response == 'C'){
        cout << "\nYou have chosen to convert to cents" << endl;
       convertToCents();
    }

    return 0;
}

void convertToCents(){
    int input;//declares a variable to store to user input
    while(input != 0){
        cout << "Enter the amount(in cents ): ";
        cin >> input;
        checkNum(input);//call a function to check the amount inputed
    }
}


//a function to calculate the difference in two times
void timeDifference(){

    int total1, total2, counter = 0;


    while(counter < 2){//loops twice to get two different times

        string time;//declares a variable to store time
        cout << "Enter a time: " ;//promps the user
        cin >> time;//stores each time input

        string str1 = time.substr(0,2);//extracts the hour from the input
        string str2 = time.substr(3,5);//extracts the minutes from the input

        stringstream geek(str1);//converts the string to int
        int t1 = 0;
        geek >> t1;//stores the hour as an int

        stringstream geek1(str2);
        int t2 = 0;
        geek1 >> t2;//stores the minute as an int

        if(counter == 0){
              total1 = (t1 * 60)+t2;//stores the first time input
        }
        if(counter == 1){

             total2 = (t1 * 60)+t2;//stores the second time input

        }

        counter++;//increments the counter
   }



    int diff = total2 - total1;
    cout << "The difference in time is:  " << diff << " minutes";

}

