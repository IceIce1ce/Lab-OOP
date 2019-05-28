#include"Triangle.h"

int main()
{
	Point p1(1, 2);
	cout << "A: (" << p1.getA() << "," << p1.getB() << ")" << endl;
	Point p2(3, 5);
	cout << "B: (" << p2.getA() << "," << p2.getB() << ")" << endl;
	Point p3(6, 8);
	cout << "C: (" << p3.getA() << "," << p3.getB() << ")";
	return 0;
}