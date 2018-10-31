//Task04
//Author: Emmanuel Akinrintoyo
//Date: 03/10/18
//A program that calculates the gross pay for each employee

#include <iostream>
using namespace std;

int main()
{
    int noOfEmployees;//stores the number of time the loop will run
    int noOfHoursWorked;//stores the hours worked by each employee
    float hourlyRate;//stores the rate per hour
    float total;
    cout << "Enter the number of employess for this run: ";
    cin >> noOfEmployees;

    do{
        cout << "Enter number of hours worked: ";
        cin >> noOfHoursWorked;//stores the hours worked

        cout << "Enter hourly rate of the worker (Euro): ";
        cin >> hourlyRate;//stores the hourly rate

        if(noOfHoursWorked > 40){//checks for overtime
            int overtime = noOfHoursWorked - 40;//gets the overtime hour
            total = (noOfHoursWorked * hourlyRate) +  (overtime * 20);
        }
        else{
            total = noOfHoursWorked * hourlyRate;//calculates the total if there's no overtime
        }

        cout << "Salary is " << total << " Euro\n";
        noOfEmployees--;//decrements the counter each time it runs

    }
    while(noOfEmployees > 0);

    return 0;
}
