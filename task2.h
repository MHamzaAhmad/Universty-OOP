#pragma once
#include <iostream>
using namespace std;

class Myintegerarray
{
private:
	int* array;
	int* sum;

public:
	Myintegerarray();
	Myintegerarray(int, int);
	void setvalue(int, int);
	Myintegerarray add(Myintegerarray* o);
	int findMaximum();
	int findMinimum();
	void print();
};