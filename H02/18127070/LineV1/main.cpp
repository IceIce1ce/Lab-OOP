#include"line.h"

int main()
{

	Point Point1(1, 2);
	cout << "Start point is: (" << Point1.GetX() << "," << Point1.GetY() << ")" << endl;
	Point Point2(3, 5);
	cout << "End point is: (" << Point2.GetX() << "," << Point2.GetY() << ")" << endl;
	Line l(Point1, Point2);
	cout<<"Line is: " << l.GetA() << "x" << " + " << l.GetB() << "y" << " = 0";
	return 0;
}