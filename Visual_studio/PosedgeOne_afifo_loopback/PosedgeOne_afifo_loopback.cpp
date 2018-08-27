// Name        : afifo.cpp
#include <stdafx.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "ftd2xx.h"
#include "stdio.h"
#include "windows.h"


#define SECTOR 9 //64-64*1024


int main()
{
	FT_HANDLE ftHandle;
	FT_STATUS ftStatus;
	DWORD BytesWritten;
	DWORD BytesRead;
	unsigned char rx_buffer[SECTOR];
	unsigned char tx_buffer[SECTOR];
	string start_signal;
	char txt_tmp[50];
	DWORD t0, t1, t_total = 0, t1_prev = 0;
	DWORD rxBytes = 0;
	DWORD txBytes = 0;
	DWORD errors = 0;
	float kbps;
	int first, second;
	long data1, data2;
	ofstream myfile;
	std::string str2("START");
	cout << "type START when you are ready:	";
	getline(cin, start_signal);
	if (start_signal.compare(str2) == 0)
	{
		for (int i = 0; i < SECTOR; i++)
		{
			tx_buffer[i] = i;
			rx_buffer[i] = 0;
		}

		// Open
		ftStatus = FT_OpenEx((PVOID) "Digilent USB Device B", FT_OPEN_BY_DESCRIPTION, &ftHandle);
		if (ftStatus != FT_OK) {
			cout << "Failed to open the Device!" << endl;
			return 0;
		}
		else {
			cout << "Opened Device Successfully" << endl;
		}

		//ftStatus = FT_SetLatencyTimer(ftHandle, 16);
		ftStatus = FT_SetUSBParameters(ftHandle, SECTOR, SECTOR);
		FT_Purge(ftHandle, FT_PURGE_RX);
		ftStatus = FT_SetFlowControl(ftHandle, FT_FLOW_RTS_CTS, 0, 0);
		myfile.open("example.txt");

		for (int j = 0; j < 100000; j++)
		{
			t0 = GetTickCount();

			
			
			ftStatus = FT_Read(ftHandle, rx_buffer, SECTOR, &BytesRead);
			for (int i = 0; i < SECTOR; i++)
			{
				if (rx_buffer[i] == 0 && rx_buffer[i + 4] == 1){
					first = i;
					second = i + 4;
				}
				if (rx_buffer[i] == 1 && rx_buffer[i + 4] == 0){
					first = i + 4;
					second = i;
				}
					
			}

			data1 = (rx_buffer[first + 1] << 16) + (rx_buffer[first + 2] << 8) + rx_buffer[first + 3];
			data2 = (rx_buffer[second + 1] << 16) + (rx_buffer[second + 2] << 8) + rx_buffer[second + 3];
			//cout << "first" << rx_buffer[first + 1] << "\t" << rx_buffer[first + 2] << "\t" << rx_buffer[first + 3] << endl;
			//cout << "second" << rx_buffer[second + 1] << "\t" << rx_buffer[second + 2] << "\t" << rx_buffer[second + 3] << endl;
			
			printf("%d,%d;\n", data1, data2);
			//printf("%d	%d	%d	%d\n", rx_buffer[first], rx_buffer[first + 1], rx_buffer[first + 2], rx_buffer[first + 3]);
			sprintf_s(txt_tmp, "%d,%d;", data1, data2);
			myfile << txt_tmp;
		
			rxBytes += BytesRead;

			// measure time
			t1 = GetTickCount();
			t_total += t1 - t0;

	


			// show results
			if (t1 - t1_prev > 2000){
				kbps = (float)((float)(rxBytes + txBytes) / (float(t_total)));
				cout << "\r" << rxBytes << " Bytes | " << kbps << " kB/s | " \
					<< errors << " errors";
				cout.flush();

				t1_prev = t1;
			

	
		}
		cout << endl;
		system("pause");
		myfile.close();
		ftStatus = FT_Close(ftHandle);
	}
return 0;
}


