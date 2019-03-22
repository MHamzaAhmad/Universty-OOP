#include <iostream>
#include <string>
#include "first test.h"
using namespace std;

// initializing with 0
Point2d::Point2d()
{
	for (int i = 0; i < 2; i++)
	{
		p1[i] = 0;
		p2[i] = 0;
	}
}
Point2d::Point2d(int x, int y)
{
	p1[0] = x;
	p1[1] = y;
}
void Point2d::setPoint(int x , int y)
{
	p2[0] = x;
	p2[1] = y;
	
}
void Point2d::print()
{
	cout << "(" << p2[0] << "," << p2[1] << ")" << endl;
}
int Point2d::calcuatedistance(const Point2d &o)
{
	double x1 = p1[0];
	double x2 = p2[0];
	double y1 = p1[1];
	double y2 = p2[1];
	double firstentity = x2 - x1;
	double secondentity = y2 - y1;
	double answer = pow(firstentity, 2) + pow(secondentity, 2);
	return answer;
}