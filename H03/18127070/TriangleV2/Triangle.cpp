#include"Triangle.h"

Triangle::Triangle(Point A1, Point B1, Point C1)
{
	if (A1.getA() < 0 && B1.getB() < 0 && C1.getC() < 0)
	{
		_A = 0;
		_B = 0;
		_C = 0;
	}
	else
	{
		_A = A1;
		_B = B1;
		_C = C1;
	}
}

Point Triangle::get_peak_A()
{
	return _A;
}

Point Triangle::get_peak_B()
{
	return _B;
}

Point Triangle::get_peak_C()
{
	return _C;
}

double Triangle::getAB()
{
	Point p1 = this->get_peak_A();
	Point p2 = this->get_peak_B();
	return p2.getB() - p1.getA();
}

double Triangle::getAC()
{
	Point p3 = this->get_peak_A();
	Point p4 = this->get_peak_C();
	return p4.getB() - p3.getA();
}

double Triangle::getBC()
{
	Point p5 = this->get_peak_B();
	Point p6 = this->get_peak_C();
	return p5.getA() - p6.getB();
}

double Triangle::calcPerimeter()
{
	double per = this->getAB() * 2 + this->getAC() * 2 + this->getBC() *2;
	return per;
}

double Triangle::calcArea()
{
	double half_per = (this->getAB() * 2 + this->getAC() * 2 + this->getBC() * 2) / 2;
	double area = sqrt(half_per * (half_per - (this->getAB() * 2)) * (half_per - (this->getAC() * 2)) * (half_per - (this->getBC() * 2)));
	return area;
}

Triangle::~Triangle()
{
}