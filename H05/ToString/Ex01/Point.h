#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Point
{
public:
	Point();
	Point(float _x, float _y);
	float GetX();
	float GetY();
	void SetX(float x);
	void SetY(float y);
	string ToString();
	static Point* Parse(string s);
	~Point();
private:
	float X, Y;
};