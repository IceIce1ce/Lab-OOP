#include"Point.h"
#include<iostream>
using namespace std;

class Rectangle
{
private:
	Point top_left, top_right, bottom_left, bottom_right;
public:
	Rectangle(Point, Point, Point, Point);
	~Rectangle();
	Point get_top_left();
	Point get_top_right();
	Point get_bottom_left();
	Point get_bottom_right();
	double getHeight();
	double getWidth();
	double calcPerimeter();
	double calcArea();
};