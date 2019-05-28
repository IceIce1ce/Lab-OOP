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