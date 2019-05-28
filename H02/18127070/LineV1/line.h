#include<iostream>
#include"Point.h"
using namespace std;

class Line
{
public:
	Line();
	Line(Point P1, Point P2);
	float GetA();
	float GetB();
private:
	Point p1, p2;
	float A, B;
};