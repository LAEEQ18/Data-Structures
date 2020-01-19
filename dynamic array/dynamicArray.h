#pragma once
class dynamicArray
{
public:
	dynamicArray();
	~dynamicArray();
	int *arr;
	int ap;
	bool isempty();
	bool isfull();
	bool insert(int x);
	void display();
};

