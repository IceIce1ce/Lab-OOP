#include"line.h"

Line::Line() : A(0), B(0)
{
}

Line::Line(Point P1, Point P2)
{
	float start_point1, start_point2, end_point1, end_point2;
	p1 = P1;
	p2 = P2;
	start_point1 = P1.GetX();
	start_point2 = P2.GetX();
	end_point1 = P1.GetY();
	end_point2 = P2.GetY();
	float slope, intercept;
	slope = (end_point2 - end_point1) / (start_point2 - start_point1);
	intercept = end_point1 - ((end_point2 - end_point1)) / (start_point2 - start_point1) * start_point1;
	B = -1 / intercept;
	A = -B * slope;
}

float Line::GetA()
{
	return A;
}

float Line::GetB()
{
	return B;
}