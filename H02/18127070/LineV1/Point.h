#include<iostream>
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
private:
	float X, Y;
};