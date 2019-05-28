#include<iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int = 0, int = 0);
	int getX();
	int getY();
	void setX(int);
	void setY(int);
};