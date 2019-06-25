//this is the .cpp file for the player class
#include "Player.h"
#include <fstream>
#include <sstream>
#include <cstring>

int Player::ID = 5766;//a unique identifier for each object player

//default constructor
Player::Player()
{
    //ctor
    cout << "Player constructor " << endl;
    jerseyNo = ID++;
    Person();
}

//overloaded constructor
Player::Player(string n){
    setName(n);
}


//overloaded constructor
Player::Player(string n, string l, int a,  char gen, int skill, int sal){
    setName(n);
    setAge(a);
    setGender(gen);
    setSkillLevel(skill);
    setLastName(l);
    setSalaryEarned(sal);
}


//a virual function
int Player::calcSalary(){

    return getSalaryEarned();
}


//destructor
Player::~Player()
{
    //dtor
    cout << "\nDestructor is executed for player object" << endl;
}

//a function that prints the details of each player onject
void Player::printPlayerDetails(){

    cout << "Player details \nName: "  << getName()
        << "\nLastname: " << getLastName()
        << "\nAge: " << getAge()
        << "\nGender: " << getGender()
        << "\nSkill level: " << getSkillLevel()
        << endl;

}

//saves the details of a player to a text file
void Player::savePlayerDetails(string c){
    ofstream outFile;
    // open an exist file Player.txt. If Player.txt does not exist - new file with that name is created
     outFile.open("Player.txt",  ios::app);
    if( ! outFile.is_open() )
        cout << "Cannot open file.\n ";

    ostringstream str1, str2, str3, str4;// declaring output string stream
    str1 << getSkillLevel();// Sending a number as a stream into output
    str2 << getSalaryEarned();
    str3 << getAge();
    str4 << getPlayerID();

    string exp = str1.str();// the str() coverts number into string
    string sal = str2.str();
    string ag = str3.str();
    string id = str4.str();

    string details = "Club: " + c + "\nID: " + id +       "\nName: "  + getName()  + " " + getLastName() + "\nAge: " + ag + "\nSkill level: " + exp  + "\nSal: " + sal + "\nGender: " + getGender() + "\n";
    outFile << details << endl;//put the word into  the file
    outFile.close();
}


//displays the details of players
void Player::viewPlayerDetails(){
    char line[256];
    ifstream inFile; // declare input file variable
    inFile.open("Player.txt"); // open an existing file manager.txt
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

