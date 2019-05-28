#include"Point.h"
#include<iostream>
#include<math.h>
using namespace std;

class Triangle
{
private:
	Point _A, _B, _C;
public:
	Triangle(Point, Point, Point);
	~Triangle();
	Point get_peak_A();
	Point get_peak_B();
	Point get_peak_C();
	double getAB();
	double getAC();
	double getBC();
	double calcPerimeter();
	double calcArea();
};