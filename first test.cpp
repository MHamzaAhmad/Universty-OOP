
#include <iostream>
#include <string>
#include "first test.h"
using namespace std;

int main()
{
	Point2d point1, point2(5, 9); // creating objects
	point1.setPoint(2, 3); //setting point
	point1.print();// printing 
	cout << pow(point1.calcuatedistance(point2), 0.5) << endl;
	
}

