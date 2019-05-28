#include<iostream>
using namespace std;

class Point
{
private:
	int a, b, c;
public:
	Point(int = 0, int = 0, int = 0);
	int getA();
	int getB();
	int getC();
	void setA(int);
	void setB(int);
	void setC(int);
};