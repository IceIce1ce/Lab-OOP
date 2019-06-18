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

string Point::ToString()
{
	stringstream writer;
	writer << "(" << a << ", " << b << ")";
	return writer.str();
}

Point* Point::Parse(string s)
{
	vector<string> v = Tokenizer::Parse(s, ",");
	v[0] = v[0].substr(1); 
	int x = stoi(v[0]);
	v[1] = v[1].substr(1, v[1].length() - 2); 
	int y = stoi(v[1]);
	v[2] = v[2].substr(1, v[2].length() - 2); 
	int z = stoi(v[2]);
	Point* ans = new Point(x, y, z);
	return ans;
}