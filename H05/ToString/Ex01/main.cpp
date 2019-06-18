#include"line.h"

int main()
{
	Point* start = new Point(3, 4);
	cout << "Start point is: " << start->ToString() << endl;
	Point* end = new Point(5, 9);
	cout << "End point is: " << end->ToString();
	delete start;
	delete end;
	Line *line1 = Line::Parse("(3, 4); (5, 9)");
	return 0;
}