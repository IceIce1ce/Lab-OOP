#include"Circle.h"

Circle::Circle()
{
	radius = 0;
}

void Circle::setRadius(float r)
{
	if (r >= 0)
	{
		radius = r;
	}
	else
	{
		cout << "Invalid radius" << endl;
	}
}

void Circle::output()
{
	cout << "Radius: " << getRadius() << endl;
}