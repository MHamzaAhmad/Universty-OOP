#include <iostream>
#include "task2.h"
using namespace std;
//default constructor
Myintegerarray :: Myintegerarray()
{
	array = new int[10];
	for (int i = 0; i < 10; i++)
	{
		array[i] = 0;
	}
}
// initializing array
Myintegerarray::Myintegerarray(int x, int y)
{
	array = new int[x];
	for (int i = 0; i < x; i++)
	{
		array[i] = 0;
	}

}

// setting user values
void Myintegerarray::setvalue(int x, int y)
{
	array[x] = y;
}

Myintegerarray Myintegerarray::add(Myintegerarray* a)
{
	sum = new int[10];
	for (int i = 0; i < 10 ; i++)
	{
		this->array[i] = this->array[i] + a->array[i];
	}
	return *this;
}

// finding maximum
Myintegerarray Myintegerarray :: findMaximum()
{
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			max = this->array[i];
		}
		else if (this->array[i] >= max)
		{
			max = this->array[i];
		}
	}
	cout << "The maximum number is: " << max << endl;
	return *this;
}

//finding maximum

Myintegerarray Myintegerarray:: findMinimum()
{
	int min = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			min = this->array[i];
		}
		else if (this->array[i] <= min)
		{
			min = this->array[i];
		}
	}
	cout << "The minimum number is: " << min << endl;
	return *this;
}

// Printing function here

void Myintegerarray::print()
{
	cout << "The sum of array is: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << this->array[i] << " ";

	}
	cout << endl;
}


