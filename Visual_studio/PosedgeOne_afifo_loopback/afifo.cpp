//============================================================================
// Name        : afifo.cpp
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "ftd2xx.h"
#include "stdio.h"
#include "windows.h"

#define SECTOR 64*1024

int main()
{
	FT_HANDLE ftHandle;
	FT_STATUS ftStatus;
	DWORD BytesWritten;
	DWORD BytesRead;
	unsigned char rx_buffer[SECTOR];
	unsigned char tx_buffer[SECTOR];
	DWORD t0, t1, t_total = 0, t1_prev = 0;
	DWORD rxBytes = 0;
	DWORD txBytes = 0;
	DWORD errors = 0;
	float kbps;

	for (int i=0; i<SECTOR; i++)
	{
		tx_buffer[i] = i;
		rx_buffer[i] = 0;
	}

	// Open
	ftStatus = FT_OpenEx((PVOID) "Digilent USB Device B", FT_OPEN_BY_DESCRIPTION, &ftHandle);
	if (ftStatus != FT_OK) {
	  cout << "Failure" << endl;
	  return 0;
	} else {
	  cout << "Success" << endl;
	}

	//ftStatus = FT_SetLatencyTimer(ftHandle, 16);
	ftStatus = FT_SetUSBParameters(ftHandle, SECTOR, SECTOR);
	FT_Purge(ftHandle, FT_PURGE_RX);
	ftStatus = FT_SetFlowControl(ftHandle, FT_FLOW_RTS_CTS, 0, 0);


	for (int j=0; j<1000; j++)
	{
		t0 = GetTickCount();

		// TX
		ftStatus  = FT_Write(ftHandle, tx_buffer, SECTOR, &BytesWritten);
		//cout << BytesWritten << " Bytes Written" << endl;
		txBytes += BytesWritten;
		// RX
		ftStatus  = FT_Read(ftHandle, rx_buffer, SECTOR, &BytesRead);
		//cout << BytesRead << " Bytes Read" << endl;
		rxBytes += BytesRead;

		// measure time
		t1 = GetTickCount();
		t_total += t1 - t0;

		// check for errors
		for (int i=0; i < SECTOR; i++)
		{
			if ( i%256 && (rx_buffer[i]-rx_buffer[i-1] != 1))
			{
				cout << "ERROR" << i <<": " << (int)rx_buffer[i] << ", " \
						<< (int)rx_buffer[i-1] << endl;
				errors++;
			}
		}


		// show results
		if (t1 - t1_prev > 2000){
			kbps = (float) ((float)(rxBytes+txBytes)/(float(t_total)));
			cout << rxBytes << " Bytes | "<< kbps << " kB/s | " \
					<< errors <<" errors\r";
			cout.flush();

			t1_prev = t1;
		}

		


	}

	ftStatus = FT_Close(ftHandle);

return 0;
}


