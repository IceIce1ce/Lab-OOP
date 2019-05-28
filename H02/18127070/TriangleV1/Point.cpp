#include"Triangle.h"

Point::Point(int _a, int _b, int _c)
{
	a = _a;
	b = _b;
	c = _c;
}

int Point::getA()
{
	return a;
}

int Point::getB()
{
	return b;
}

int Point::getC()
{
	return c;
}

void Point::setA(int _a)
{
	a = _a;

}

void Point::setB(int _b)
{
	b = _b;
}

void Point::setC(int _c)
{
	c = _c;
}