//this is the header file for the Person class
#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;


class Person
{
    public:
        Person();//default constructor
        virtual ~Person();//destructor

        //setters and getters
        void setName(string n){name = n;}
        void setAge(int ag){
            if(ag>10 && ag<75){age = ag;}
            else{
                cout << "Invalid age" << endl;
            }
        }
        void setLastName(string ln){lastname = ln;}
        void setGender(char gn){gender=gn;}
        string getName(){return name;}
        int getAge(){return age;}
        string getLastName(){return lastname;}
        char getGender(){return gender;}
        void setSalaryEarned(int salary){
            if(salary >= 0){
                salaryEarned = salary;
            }
        }
        int getSalaryEarned(){return salaryEarned;}

        virtual int calcSalary();//a virtual function


    private:
        //member variables
        string name;
        string lastname;//id maybe
        int age;
        char gender;
        int salaryEarned;
};

#endif // PERSON_H
