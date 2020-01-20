// Lab07.cpp : Defines the entry point for the console application.
//An application code to create objects representing the COM port.
//The program opens the port, get characters from the keyboard
//and writes them to the port. 
//The program can also open the port, read incoming data from the port 
//and display them as characters on the screen
//This program was written using the available functions in the Serial class

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	
	char buffer[256];//stores a character array
	char rbuffer[256]; //"rbuffer" for receving buffer
	CSerial serial;//creates an instance of CSerial
	
	bool openPort = serial.Open(1, 9600 );//opens port 1 with a baud rate of 9600
	bool checkPort = serial.IsOpened();

	int amount = 0, amount1 = 0;
	if(checkPort){
		while(1){
			//sending
		  	if(kbhit()){	
			cout << "Enter some characters: " << endl;//reads the input from the user
			cin >> buffer;//stores the user input
			amount = strlen(buffer)+1;
			serial.SendData(buffer,amount);//sends 5 bytes
			//break;
			}
							
		//receiving
			if(amount1 = serial.ReadDataWaiting()  ){
					serial.ReadData(rbuffer, amount1);
					cout << rbuffer << endl;
		
			}


		}
	}


	serial.Close();

	return 0;
}

