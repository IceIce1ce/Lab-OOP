#include"Circle.h"

int main() 
{
	Circle c;  
	Center c1(1, 2);
	c.setRadius(5.7);
    c.output();
	cout << "Center: (" << c1.getX() << "," << c1.getY() << ")";
	return 0;
}