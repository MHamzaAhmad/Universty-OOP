#pragma once
#include <iostream>
#include <string>
using namespace std;

class Point2d
{
private:
	double p1[2];
	double p2[2];
public:
	Point2d();
	Point2d(int, int);
	void setPoint(int, int);
	//int getpoint(int);
	void print();
	int calcuatedistance(const Point2d& o);
};
