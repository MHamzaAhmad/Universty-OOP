#pragma once
#include <iostream>
using namespace std;

class Myintegerarray
{
private:
	int* array;

public:
	Myintegerarray();
	Myintegerarray(int, int);
	void setvalue(int, int);
	Myintegerarray add(Myintegerarray* o);
	Myintegerarray findMaximum();
	Myintegerarray findMinimum();
	void print();
};