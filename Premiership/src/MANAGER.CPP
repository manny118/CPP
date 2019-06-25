//this is the .cpp file for the manager class
#include "Manager.h"
#include <fstream>
#include <sstream>
#include <cstring>


//default constructor
Manager::Manager()
{
    //ctor
    //salaryEarned = 0;
}

Manager::~Manager()
{
    //dtor
}

//a virtual function that calculater the salary of
//a manager based on his level of experience
int Manager::calcSalary(){
    double sal;

    //checks the experience level of a manager
    if(getExperienceLevel() == 1){
        sal = getSalaryEarned() * 2;
    }
    else if(getExperienceLevel() == 2){
        sal = getSalaryEarned() * 3;
    }
    else if(getExperienceLevel() == 3){
        sal = getSalaryEarned() * 4;
    }
    else{
        sal = getSalaryEarned() ;
    }

    return sal;
}

//prints the details of the manager
void Manager::printManagerDetails(){
    string exp;
    switch(getExperienceLevel()){
    case 1:
        exp = "Amateur";
    case 2:
        exp = "Intermediate";
    case 3:
        exp = "Expert";
    }

    string sty;
    switch(getStyle()){
    case 1:
        sty = "Attacking";
    case 2:
        sty = "Defensive";
    case 3:
        sty = "Counter-attacking";
    }


    cout << "\nFirst name: " << getName() << "\nLast name: " << getLastName()
         << "\nAge: " << getAge()   << "\nGender: " << getGender()
         << "Experience: " << exp  << "Style: " << sty   << endl;

}



//saves the details of a manager to a text file
void Manager::saveManagerDetails(string c){
    string sty;

    switch(getStyle()){
    case 1:
        sty = "Attacking";
    case 2:
        sty = "Defensive";
    case 3:
        sty = "Counter-attacking";
    }


    ofstream outFile;
    // open an exist file manager.txt. If manager.txt does not exist - new file with that name is created
     outFile.open("manager.txt",  ios::app);
    if( ! outFile.is_open() )
        cout << "Cannot open file.\n ";

    ostringstream str1, str2, str3;// declaring output string stream
    str1 << getExperienceLevel();// Sending a number as a stream into output
    str2 << getSalaryEarned();
    str3 << getAge();

    string exp = str1.str();// the str() coverts number into string
    string sal = str2.str();
    string ag = str3.str();
//+ "\nStyle: " + getStyle()
    string details = "Club: " + c+  "\nManger: "  + getName()  + " " + getLastName() + "\nAge: " + ag + "\nExperience level: " + exp  + "\nSal: " + sal + "\nGender: " + getGender() + "\nStyle: " + sty + "\n";
   // string details =

    outFile << details << endl;//put the word into  the file
    outFile.close();
}

//displays the details of  managers in the textfile
void Manager::viewManagerDetails(){
    char line[256];
    ifstream inFile; // declare input file variable
    inFile.open("manager.txt"); // open an existing file manager.txt
    while(! inFile.eof()) {
        inFile.getline(line, 256);
        //similar to cin, gets a line from the file
        char *token = strtok(line, " ");
        while (token != NULL) {
            cout << token << '\t';
            token = strtok(NULL, " ");
        }
        cout << endl;
    }
    inFile.close();
}


