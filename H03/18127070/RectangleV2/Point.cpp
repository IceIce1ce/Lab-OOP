#include"Rectangle.h"

Point::Point(int Ax, int Ay)
{
	x = Ax;
	y = Ay;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::setX(int Ax)
{
	x = Ax;

}

void Point::setY(int Ay)
{
	y = Ay;
}