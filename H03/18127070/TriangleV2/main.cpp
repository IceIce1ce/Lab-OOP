#include"Triangle.h"

int main()
{
	Point p1(1, 1);
	Point p2(1, 2);
	Point p3(4, 2);
	Triangle tri(p1, p2, p3);
	cout << "Perimeter is: " << tri.calcPerimeter() << endl;
	cout << "Area is: " << tri.calcArea();
	return 0;
}