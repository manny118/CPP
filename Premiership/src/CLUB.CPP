//this class is used to create club objects
#include "Club.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>


int Club::num_of_players = 0;
int Club::position = 0;

//default constructor
Club::Club()
{
    //ctor
    numberOfPlayers = 0;
    trophiesWon = 0;
    leaguePosition = ++position;
    playersArray = new Player*[NUM];
}

//an overloaded constructor
Club::Club(string n,  int t, int no){
    name = n;
    leaguePosition = ++position;
    trophiesWon = t;
    numberOfPlayers = no;
}

//an overloaded constructor
Club::Club(int noOfPlayers){
    cout << "Normal constructor allocating ptr" << endl;
    //allocating memory for the ptr
    ptr = new int;
    *ptr = noOfPlayers;
    setNumberOfPlayers(noOfPlayers);
}

//copy constructor
Club::Club(const Club &obj){
    cout << "Copy construcor allocating ptr" << endl;
    ptr = new int;
    *ptr = *obj.ptr;
    setNumberOfPlayers(*ptr);
}

//this function is used for adding a player to a club
void Club::addPlayer(string c){
    Player *player1;
    int SIZE=0;
    string l, n; int a, s,sal; char g;

    cout << "How many players would you like to add" << endl;
    cin >> SIZE;

    if(SIZE > 22){
        cout << "Maximum number of players exceeded" << endl;
    }
     else if((SIZE > 0) && (SIZE <= 22)) {
        while(num_of_players < SIZE){
            cout << "Please enter F_NAME L_NAME, AGE, GENDER, SKILL_LEVEL, SALARY: " << endl;
            cin >> n;
            cin >> l;
            cin >> a;
            cin >> g;
            cin >> s;
            cin >> sal;
            player1 = new Player(n,l,a,g,s,sal);

            cout << "Player added successfully!" << endl;
            player1->savePlayerDetails(c);
            num_of_players++;
        }

        if(num_of_players == 22){//
            cout << "Total number of players added: " << num_of_players << endl;
        }
     }

}

//adds a player to a club
void Club::addPlayer(){
    Player *player,*player1;
    int SIZE=0;
    string l, n;
    int a, s,sal;
    char g;
    fstream stud;

    stud.open("Player.txt", ios::app);

    cout << "How many players would you like to add" << endl;
    cin >> SIZE;

    if(SIZE > 22){
        cout << "Maximum number of players exceeded" << endl;
    }

    else if((SIZE > 0) && (SIZE <= 22)) {
        while(num_of_players < SIZE){
        cout << "Please enter F_NAME L_NAME, AGE, GENDER, SKILL_LEVEL, SALARY: " << endl;
        cin >> n;
        cin >> l;
        cin >> a;
        cin >> g;
        cin >> s;
        cin >> sal;



        int randNum = rand()%250;//generates a random number
        int id = (player1->getPlayerID()) + randNum;

        cout << "Player has been added successfully!" << endl;
        string name = n;
        playersName.push(name);//stores the player's name

        stud << id << '|' << n<<'|'<<l<<'|'<<a   << '|' << g << '|' << s << '|' << sal <<    '\n';
        stud.close();

        cout << "Player added successfully!" << endl;

        player1 = new Player(n,l,a,g,s,sal);//creates a player object
        playersArray[num_of_players] = player1;
        num_of_players++;
        }
    }
}



//this function is used for adding a manager to a club
void Club::addManager(string c){
    fstream stud;
    string l, n;
    int a,s;
    char g;
    int e, sal;
    Manager man;

    stud.open("manager.txt", ios::app);

    cout << "Please enter F_NAME L_NAME, AGE, GENDER, EXP_LEVEL, STYLE, SALARY: " << endl;
    cin >> n;
    cin >> l;
    cin >> a;
    cin >> g;
    cin >> s;
    cin >> e;
    cin >> sal;

    man.setName(n);
    man.setLastName(l);
    man.setAge(a);
    man.setGender(g);
    man.setExperienceLevel(e);
    man.setStyle(s);
    man.setSalaryEarned(sal);

    stud << c << '|' << n<<'|'<<l<<'|'<<a   << '|' << g << '|' << e << '|' << s << '|' << sal <<    '\n';
    stud.close();

    //man.saveManagerDetails(c);
    cout << "Manager added successfully!" << endl;
    string name = n ;
    managersName.push(name);

}



//deletes a player from a club
void Club::deletePlayer(){
    fstream stud;
    fstream temp;

    char id[25];
    char n [25];
    char lstnm[25];
    char age[25];
    char g[25];
    char s[25];
    char sal[25];
    char a[25];

    stud.open("Player.txt",ios::in);
    temp.open("temp.txt",ios::out);

    cin.ignore();
    cout<<" \n\t enter the player id to delete record : ";
    cin.getline(a,25);


    while(!stud.eof()){

        stud.getline(id,25,'|');
        stud.getline(n,25,'|');
        stud.getline(lstnm,25,'|');
        stud.getline(age,25,'|');
        stud.getline(g,25,'|');
        stud.getline(s,25,'|');
        stud.getline(sal,25);

        if(strcmp (id,a) == 0){
            continue;
        }
        else{
            temp << id << '|' << n <<'|' <<lstnm<<'|'<<age << '|'<<g<<'|'<<s<< '|' << sal <<  '\n';
        }

    }

    temp.close();
    stud.close();

    stud.open("Player.txt",ios::out);
    temp.open("temp.txt",ios::in);

    while(!temp.eof()){

        temp.getline(id,25,'|');
        temp.getline(n,25,'|');
        temp.getline(lstnm,25,'|');
        temp.getline(age,25,'|');
        temp.getline(g,25,'|');
        temp.getline(s,25,'|');
        temp.getline(sal,25);

        cout << "Deleted!"  <<  endl;
        stud<< id << '|' << n<<'|'<<lstnm<<'|'<<age << '|'<<g<<'|'<<s<< '|' <<sal <<  '\n';

    }

    temp.close();
    stud.close();
    remove("temp.txt");
}




//deletes a manager from a club
void Club::deleteManager(){
    fstream stud;
    fstream temp;
    bool isDeleted = false;
    char c[25];
    char n[25];
    char lstnm[25];
    char age[25];
    char g[25];
    char e[25];
    char s[25];
    char sal[25];
    char a[25];

    stud.open("manager.txt",ios::in);
    temp.open("temp.txt",ios::out);

    cin.ignore();
    cout<<" \n\t enter the club name to delete record : ";
    cin.getline(a,25);

    while(!stud.eof()){

        stud.getline(c,25,'|');
        stud.getline(n,25,'|');
        stud.getline(lstnm,25,'|');
        stud.getline(age,25,'|');
        stud.getline(g,25,'|');
        stud.getline(e,25,'|');
        stud.getline(s,25,'|');
        stud.getline(sal,25);

        if(strcmp (c,a) == 0){
            continue;
        }

        else{
            temp << c << '|' << n<<'|'<<lstnm<<'|'<<a   << '|' << g << '|' << e << '|' << s << '|' << sal <<    '\n';
        }

    }

    temp.close();
    stud.close();

    stud.open("manager.txt",ios::out);
    temp.open("temp.txt",ios::in);

    while(!temp.eof()){

        temp.getline(c,25,'|');
        temp.getline(n,25,'|');
        temp.getline(lstnm,25,'|');
        temp.getline(age,25,'|');
        temp.getline(g,25,'|');
        temp.getline(e,25,'|');
        temp.getline(s,25,'|');
        temp.getline(sal,25);

        stud << c << '|' << n<<'|'<<lstnm<<'|'<<a   << '|' << g << '|' << e << '|' << s << '|' << sal <<    '\n';
        isDeleted = true;
    }

    temp.close();
    stud.close();
    remove("temp.txt");
    if(isDeleted){
        cout << "Deleted!" << endl;
    }

}


//function overloading operator using references to Club objects
Club operator+(Club &c1, Club &c2){
    int noOfPlayer = c1.getNumberOfPlayers() + c2.getNumberOfPlayers();
    Club c;
    c.setNumberOfPlayers(noOfPlayer);

    return c;//returns a club object
}


//operator overloading
void Club::operator=(Club c){
    cout << "Copy assignment" << endl;
    numberOfPlayers = c.getNumberOfPlayers();
}

//Less than or equal to operator
bool operator<=(Club C1, Club C2){

    return C1.getNumberOfPlayers()<=C2.getNumberOfPlayers();
}


//a function that prints the number of players
void Club::printPlayersName(){

    while(!playersName.empty()){
        cout << playersName.top();
        playersName.pop();
    }

}

//this  function print the details of a club that was entered by the user
void Club::printClubDetails(){

    cout << "\nClub name: " << getName()
         << "\nLeague position: " << getLeaguePosition()
         << "\nTrohies won: " << getTrophiesWon()
         << "\nNumber of players: " << getNumberOfPlayers() << endl;
}

void Club::display(Club obj){
    cout << "Number of players: " << obj.getNumberOfPlayers() << endl;
}


//saves the details of a player to a text file
void Club::saveClubDetails(){
    ofstream outFile;
    // open an exist file clubs.txt. If clubs.txt does not exist - new file with that name is created
     outFile.open("clubs.txt",  ios::app);
    if( ! outFile.is_open() )
        cout << "Cannot open file.\n ";

    ostringstream str1, str2, str3;// declaring output string stream
    str1 << getLeaguePosition();// Sending a number as a stream into output
    str2 << getTrophiesWon();
    str3 << getNumberOfPlayers();

    string pos = str1.str();// the str() coverts number into string
    string trop = str2.str();
    string no = str3.str();

    string details = "\n" + getName() + "|" + trop + "|" + no;
    outFile << details << endl;//put the word into  the file
    outFile.close();
}

//views the details of a club
void Club::viewClubDetails(){
    char line[256];
    ifstream inFile; // declare input file variable
    inFile.open("clubs.txt"); // open an existing file clubs.txt
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

Club::~Club()
{
    //dtor
}


//updates the details of a player
void Club::updatePlayerDetails(){
    fstream stud;
    fstream temp;

    char id[25];
    char n[25];
    char lstnm[25];
    char age[25];
    char g[25];
    char s[25];
    char sal[25];
    char a[25];

    stud.open("Player.txt",ios::in);
    temp.open("temp.txt",ios::out);


    cin.ignore();
    cout<<" \n\t Enter the player ID to update record : ";
    cin.getline(a,25);

    while(!stud.eof()){

        stud.getline(id,25,'|');
        stud.getline(n,25,'|');
        stud.getline(lstnm,25,'|');
        stud.getline(age,25,'|');
        stud.getline(g,25,'|');
        stud.getline(s,25,'|');
        stud.getline(sal,25);

        if(strcmp(id,a)==0){//strcmp compares two strings

            cout << "Please enter ID, F_NAME L_NAME, AGE, GENDER, SKILL_LEVEL, SALARY: " << endl;
            cin >> id;
            cin >> n;
            cin >> lstnm;
            cin >> a;
            cin >> g;
            cin >> s;
            cin >> sal;

            temp << id << '|' << n <<'|' <<lstnm<<'|'<<age << '|'<<g<<'|'<<s<< '|' << sal <<  '\n';
        }

        else{

            temp << id << '|' << n <<'|' <<lstnm<<'|'<<age << '|'<<g<<'|'<<s<< '|' << sal <<  '\n';

        }
    }

    temp.close();
    stud.close();

    stud.open("Player.txt",ios::out);
    temp.open("temp.txt",ios::in);

    while(!temp.eof()){

        temp.getline(id,25,'|');
        temp.getline(n,25,'|');
        temp.getline(lstnm,25,'|');
        temp.getline(age,25,'|');
        temp.getline(g,25,'|');
        temp.getline(s,25,'|');
        temp.getline(sal,25);

        stud << id << '|' << n <<'|' <<lstnm<<'|'<<age << '|'<<g<<'|'<<s<< '|' << sal <<  '\n';

    }

    temp.close();
    stud.close();
    remove("temp.txt");

}


//updates the details of a maangers
void Club::updateManagersDetails(){
    fstream stud;
    fstream temp;

    char c[25];
    char n[25];
    char lstnm[25];
    char age[25];
    char g[25];
    char e[25];
    char s[25];
    char sal[25];
    char a[25];

    stud.open("manager.txt",ios::in);
    temp.open("temp.txt",ios::out);

    cin.ignore();
    cout<<" \n\t Enter the club name to update record : ";
    cin.getline(a,25);

    while(!stud.eof()){

        stud.getline(c,25,'|');
        stud.getline(n,25,'|');
        stud.getline(lstnm,25,'|');
        stud.getline(age,25,'|');
        stud.getline(g,25,'|');
        stud.getline(e,25,'|');
        stud.getline(s,25,'|');
        stud.getline(sal,25);

        if(strcmp(c,a)==0){//strcmp compares two strings

            cout << "Please enter CLUB'S NAME,  F_NAME L_NAME, AGE, GENDER, EXP_LEVEL, STYLE, SALARY: " << endl;
            cin >> c;
            cin >> n;
            cin >> lstnm;
            cin >> a;
            cin >> g;
            cin >> e;
            cin >> s;
            cin >> sal;

            temp << c << '|' << n<<'|'<<lstnm<<'|'<<age   << '|' << g << '|' << e << '|' << s << '|' << sal <<    '\n';
        }
        else{

            temp << c << '|' << n<<'|'<<lstnm<<'|'<<a   << '|' << g << '|' << e << '|' << s << '|' << sal <<    '\n';

        }
    }

    temp.close();
    stud.close();

    stud.open("manager.txt",ios::out);
    temp.open("temp.txt",ios::in);

    while(!temp.eof()){

        temp.getline(c,25,'|');
        temp.getline(n,25,'|');
        temp.getline(lstnm,25,'|');
        temp.getline(age,25,'|');
        temp.getline(g,25,'|');
        temp.getline(e,25,'|');
        temp.getline(s,25,'|');
        temp.getline(sal,25);

        stud << c << '|' << n<<'|'<<lstnm<<'|'<<a   << '|' << g << '|' << e << '|' << s << '|' << sal <<    '\n';

    }

    temp.close();
    stud.close();
    remove("temp.txt");

}

