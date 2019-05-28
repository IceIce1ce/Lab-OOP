#include"Rectangle.h"

int main()
{
	Point p1(1, 2);
	cout << "Top left is: (" << p1.getX() << "," << p1.getY() << ")" << endl;
	Point p2(3, 5);
	cout << "Bottom right is: (" << p2.getX() << "," << p2.getY() << ")";
	return 0;
}