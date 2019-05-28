#include"line.h"

Point::Point() : X(0), Y(0)
{
}

Point::Point(float _x, float _y)
{
	X = _x;
	Y = _y;
}

void Point::SetX(float x)
{
	X = x;
}

void Point::SetY(float y)
{
	Y = y;
}

float Point::GetX()
{
	return X;
}

float Point::GetY()
{
	return Y;
}