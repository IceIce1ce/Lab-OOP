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

Point::~Point()
{	
}

string Point::ToString()
{
	stringstream writer;
	writer << "(" << X << ", " << Y << ")";
	return writer.str();
}

Point* Point::Parse(string s)
{
	vector<string> v = Tokenizer::Parse(s, ",");
	v[0] = v[0].substr(1); 
	int x = stoi(v[0]);
	v[1] = v[1].substr(1, v[1].length() - 2); 
	int y = stoi(v[1]);
	Point * ans = new Point(x, y);
	return ans;
}