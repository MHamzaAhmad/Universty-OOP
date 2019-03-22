

#include <iostream>
#include "task2.h"
using namespace std;

int main()
{
	int v; 
	Myintegerarray* ptrintarray1 = new Myintegerarray(10, 0);
														
	cout << "Enter a value for first array." << endl;		//putting some values in the array.
	for (int i = 0; i < 10 ; i++)
	{
		cout << "Enter a value: " << endl;
		cin >> v;
		ptrintarray1->setvalue(i, v);
	}

	v = 0;														// Making another array.
	Myintegerarray* ptrintarray2 = new Myintegerarray(10, 0);

	cout << "Enter a value for 2nd array." << endl;			//Putting some values.
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a value: " << endl;
		cin >> v;
		ptrintarray2->setvalue(i, v);
	}

	Myintegerarray ptrintarray3;					//Creating third which will contain summ of the other two.
	ptrintarray3 = ptrintarray1->add(ptrintarray2);

	ptrintarray3.print();				//first printing the sum.

	cout << "The maximum value is: " << ptrintarray3.findMaximum() << endl;		//printing maximum.

	cout << "The minimum value is: " << ptrintarray3.findMinimum() << endl;		//printing minimum.

}