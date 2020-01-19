// dynamic array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "dynamicArray.h"
#include <conio.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	dynamicArray obj1;
	srand(NULL);
	int r;

	for (int i = 0; i < 1000000; i++)
	{
		r = rand();
		obj1.insert(2);
	}

	obj1.display();

	_getch();
	return 0;
}

