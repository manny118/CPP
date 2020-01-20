#pragma once

// Serial.h

#ifndef __SERIAL_H__
#define __SERIAL_H__

#define FC_DTRDSR       0x01
#define FC_RTSCTS       0x02
#define FC_XONXOFF      0x04
#define ASCII_BEL       0x07
#define ASCII_BS        0x08
#define ASCII_LF        0x0A
#define ASCII_CR        0x0D
#define ASCII_XON       0x11
#define ASCII_XOFF      0x13

class CSerial
{

public:
	CSerial();
	~CSerial();

	BOOL Open( int nPort = 2, int nBaud = 9600 ); ////This member function is used to open the serial port. It takes two integer arguments. The first argument contains the port number 
//where the valid entries are 1 through 4. The second argument is the baud rate. Valid values for this argument are 1200, 2400, 4800, 9600, 19200, 38400 and 76800. 
//This function returns TRUE if successful. Otherwise, it returns a value of FALSE
	BOOL Close( void );

	int ReadData( void *, int ); //This function reads data from the port's incoming buffer. The first argument that it takes is a void* to a buffer into which the data will be placed. 
	//The second argument is an integer value that gives the size of the buffer. The return value of this function contains the number of bytes that were successfully read into the provided data buffer. 
	int SendData( const char *, int ); //This function writes data from a buffer to the serial port. The first argument it takes is a const char* to a buffer that contains the data being sent. 
	//The second argument is the number of bytes being sent. This function will return the actual number of bytes that are succesfully transmitted.
	int ReadDataWaiting( void ); //This function simply returns the number of bytes that are waiting in the communication port's buffer. 
	//It basically allows you to "peek" at the buffer without actually retrieving the data.

	BOOL IsOpened( void ){ return( m_bOpened ); }

protected:
	BOOL WriteCommByte( unsigned char );

	HANDLE m_hIDComDev;
	OVERLAPPED m_OverlappedRead, m_OverlappedWrite;
	BOOL m_bOpened;

};

#endif