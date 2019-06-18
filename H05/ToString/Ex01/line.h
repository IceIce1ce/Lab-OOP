#include<iostream>
#include"Point.h"
#include"Tokenizer.h"
using namespace std;

class Line
{
public:
	Line();
	Line(Point* P1, Point* P2);
	float GetA();
	float GetB();
	static Line* Parse(string s);
private:
	Point* p1;
	Point* p2;
	float A, B;
};