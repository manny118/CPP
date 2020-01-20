//Author: Emmanuel Akinrintoyo
// CurrentTimeDll.cpp
// compile with: /EHsc /LD
//a DLL which will display the current time on the screen 

#include "CurrentTime.h"
#include <stdexcept>
using namespace std;
#include <string>
#include <iostream>
#include <ctime>


namespace CurrentTime{

	void MyCurrentTime::DisplayCurrentTime(){
   
		// current date/time based on current system
		time_t now = time(0);
  
		// convert now to string form
	   
		char* dt = ctime(&now);

		cout << "The local date and time is: " << dt << endl;

		// convert now to tm struct for UTC
		tm *gmtm = gmtime(&now);
		dt = asctime(gmtm);
		cout << "The date and time is:"<< dt << endl;

		//return "hello";
	}
}
