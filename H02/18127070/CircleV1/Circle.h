#include"Center.h"

class Circle
{
private:
	float radius;
public:
	Circle();
	void setRadius(float);
	float getRadius() { return radius; }
	void input();
	void output();
};