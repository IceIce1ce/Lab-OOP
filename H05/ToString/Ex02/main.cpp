#include"Triangle.h"

int main()
{
	Point* p1 = new Point(6, 15);
	cout << "A" << p1->ToString() << endl;
	Point* p2 = new Point(1, 20);
	cout << "B" << p2->ToString() << endl;
	Point* p3 = new Point(61, 92);
	cout << "C" << p3->ToString();
	delete p1;
	delete p2;
	delete p3;
	Triangle* Triangle = Triangle::Parse("(6, 15), (1, 20), (61, 92)");
	return 0;
}