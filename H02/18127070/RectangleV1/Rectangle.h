#include"Point.h"
#include<iostream>
using namespace std;

class Rectangle
{
private:
	Point top_left, bottom_right;
public:
	Rectangle(Point, Point);
	Point get_top_left();
	Point get_bottom_right();
};