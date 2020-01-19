#include "stdafx.h"
#include "dynamicArray.h"
#include <iostream>
using namespace std;

dynamicArray::dynamicArray()
{
	arr = new int[1000000];
	ap = 0;
}


dynamicArray::~dynamicArray()
{
}

bool dynamicArray::insert(int x)
{
	arr[ap++];
	
	return true;
}

void dynamicArray::display()
{
	for (int i = 0; i < ap; i++)
	{
		cout << arr[i];
	}
}