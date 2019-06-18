#include"Triangle.h"

Triangle::Triangle(Point* A1, Point* B1, Point* C1)
{
	if (A1->getA() < 0 && B1->getB() < 0 && C1->getC() < 0)
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
	return *_A;
}

Point Triangle::get_peak_B()
{
	return *_B;
}

Point Triangle::get_peak_C()
{
	return *_C;
}

Triangle* Triangle::Parse(string s)
{
	vector<string> v = Tokenizer::Parse(s, ";");
	v[0] = v[0].substr(1);
	Point* p1 = Point::Parse(v[0]);
	v[1] = v[1].substr(1);
	Point* p2 = Point::Parse(v[1]);
	v[2] = v[2].substr(1);
	Point* p3 = Point::Parse(v[2]);
	Triangle *ans = new Triangle(p1, p2, p3);
	return ans;
}