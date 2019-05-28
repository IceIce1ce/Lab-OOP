#include<iostream>
using namespace std;

class Center
{
private:
	int x, y;
public:
	Center(int = 0, int = 0);
	int getX();
	int getY();
	void setX(int);
	void setY(int);
};