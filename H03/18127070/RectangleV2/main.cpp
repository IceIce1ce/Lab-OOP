#include"Rectangle.h"

int main()
{
	Point p1(1, 1); 
	Point p2(10, 10); 
	Point p3(1, 5); 
	Point p4(10, 5);
	Rectangle rec(p1, p2, p3, p4);
	cout << "Perimeter is: " << rec.calcPerimeter() << endl;
	cout << "Area is: " << rec.calcArea();
	return 0;
}