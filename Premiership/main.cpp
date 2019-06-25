#include <iostream>
#include "Player.h"
#include "Club.h"
#include "Premiership.h"
#include "Login.h"
using namespace std;


int main()
{
    /*//to test the classes and functions
    Player p;
    p.setName("Frew");    p.setGender('m');
    p.setLastName("Law");    p.setAge(12);    p.printPlayerDetails();


    /*Player p;
    p.setSalaryEarned(3443);
    cout << p.getSalaryEarned() << endl;
    cout << p.calcSalary();
    */
/*//manager object
    Manager man;
     man.setSalaryEarned(45);
    man.setExperienceLevel(2);
    cout << man.calcSalary();
*/

/*
    Club c;//default constructor initialisation
    c.setName("Liverpool");
    c.setTrophiesWon(12);

    Club c2;
    c2.setName("United");
    c2.setTrophiesWon(10);
    c2.printClubDetails();
    c.printClubDetails();

   // Club c3 = operator+(c, c2);
    Club c3 = c + c2;
    cout << c3.getTrophiesWon();

    if(c2 <= c){
        cout << "Less than or equal to" << endl;
    }
    else{
        cout << "Not less than or equal to "<< endl;
    }

    //Player p1();
    Player p;
    p.~Player();
*/


/*
    Club cc1(11);
    cc1.display(cc1);
    Club cc2 = cc1;//this calls the copy constructor
    cc2.display(cc2);
*/


/*
    Club c;//default constructor initialisation
    c.setName("Liverpool");
    c.setTrophiesWon(12);
    c.printClubDetails();

    Club *c1;//default constructor initialisationn using pointers
    (c1)->setName("Palace");
    (c1)->setTrophiesWon(12);
    //(c1)->printClubDetails();
*/

/*
    Club c1("City", 2, 11);
    c1.saveClubDetails();

    Club c2("United", 10 , 11);//overoaded constructor
    c2.printClubDetails();
    //c2.saveClubDetails();
    c2.addPlayer();
    c2.addManager();
    //c2.printPlayersName();
    c2.saveClubDetails();
    Premiership p1;
*/
    //p1.getRegistreredClubs();p1.addClub(&c); p1.addClub(&c2);
    //Player ppp("great", "henry", 12, 'm', 1);
    //ppp.printPlayerDetails();
    //c2.printClubs();

   // Club cc("City", 2, 11);
   // cc.addPlayer();cout << "Player added";
   // cc.saveClubDetails();



 /*
    Club dd1(3);
    Club dd2(2);
    cout << dd2.getNumberOfPlayers() << endl;
    Club dd3 = dd2;

    Club dd4 = dd1+ dd3; //overloaded assignment operator
    dd4.printClubDetails();

    dd4.display(dd4);

    cout << "\n\n" << endl;

    Person *pp1 = new Player("James");//polymorphism
    cout << "Name: " << pp1->getName();
*/



/*    Manager mm;
    mm.setName("Ole");
    mm.setLastName("Jose");
    mm.setAge(22);
    mm.setStyle(1);
    mm.setGender('m');
    mm.setExperienceLevel(2);
    mm.setSalaryEarned(100);
    mm.saveManagerDetails();
*/
/*
    Player ppp1;
    ppp1.setName("Roly");
    ppp1.setLastName("Lop");
    ppp1.setSalaryEarned(40000);
    ppp1.setSkillLevel(2);
    ppp1.setGender('m');
    ppp1.setAge(23);
    ppp1.savePlayerDetails();
*/

    //Club cc1;
    //cc1.addPlayer();
    //cc1.deletePlayer();
    //cc1.updatePlayerDetails();

    //Premiership po;
    //po.updateClub();
    //po.deleteClub();
   // cc1.addManager("watford");
    //cc1.updateManagersDetails();
   // cc1.deleteManager();
    //


    //polymorphism
    Person *s;
    Player rr;
    rr.setName("James");
    s = &rr;
    cout << s->getName() << endl;


/*//displays the user interface
    Login log;
    log.homeScreen();
    //log.~Login();//explicit call to destructor

*/

    return 0;
}
