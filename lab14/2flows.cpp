#include "stdafx.h"
#include "iostream"
#include <windows.h>

using namespace std;

HANDLE thread[5];
int nemez = 0;
int russ = 0;
int amer = 0;

DWORD WINAPI thread0(LPVOID);
DWORD WINAPI thread1(LPVOID);
DWORD WINAPI thread2(LPVOID);
DWORD WINAPI thread3(LPVOID);
DWORD WINAPI thread4(LPVOID);

int main()
{
	
	thread[0] = CreateThread(NULL,0,thread0,NULL, 0, NULL);
	thread[1] = CreateThread(NULL,0,thread1,NULL, 0, NULL);
	thread[2] = CreateThread(NULL,0,thread2,NULL, 0, NULL);
	thread[3] = CreateThread(NULL,0,thread3,NULL, 0, NULL);
	thread[4] = CreateThread(NULL,0,thread4,NULL, 0, NULL);

	DWORD wait = WaitForMultipleObjects(5, thread, true, INFINITE);
	
	cout << nemez << "\n";
	cout << russ << "\n";
	cout << amer << "\n";
	cout <<nemez+russ+amer<< "\n";
	return 0;
}

DWORD WINAPI thread0(LPVOID t)
{
	for (int i=0; i<500; i++)
	{
		int a = rand()%3+1;
		if (a==1){
			::nemez++;
		}
		if (a==2){
			::russ++;
		}
		if (a==3){
		::amer++;
		}
	}
	return 0;
}

DWORD WINAPI thread1(LPVOID t)
{
	for (int i=0; i<500; i++)
	{
		int a = rand()%3+1;
		if (a==1){
			::nemez++;
		}
		if (a==2){
			::russ++;
		}
		if (a==3){
		::amer++;
		}
	}
	return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
	for (int i=0; i<500; i++)
	{
		int a = rand()%3+1;
		if (a==1){
			::nemez++;
		}
		if (a==2){
			::russ++;
		}
		if (a==3){
		::amer++;
		}
	}
	return 0;
}

DWORD WINAPI thread3(LPVOID t)
{
	for (int i=0; i<500; i++)
	{
		int a = rand()%3+1;
		if (a==1){
			::nemez++;
		}
		if (a==2){
			::russ++;
		}
		if (a==3){
		::amer++;
		}
	}
	return 0;
}

DWORD WINAPI thread4(LPVOID t)
{
	for (int i=0; i<500; i++)
	{
		int a = rand()%3+1;
		if (a==1){
			::nemez++;
		}
		if (a==2){
			::russ++;
		}
		if (a==3){
		::amer++;
		}
	}
	return 0;
}

