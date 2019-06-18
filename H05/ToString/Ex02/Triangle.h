#include"Point.h"
#include"Tokenizer.h"
#include<iostream>
using namespace std;

class Triangle
{
private:
	Point* _A; 
	Point*_B; 
	Point* _C;
public:
	Triangle(Point*, Point*, Point*);
	Point get_peak_A();
	Point get_peak_B();
	Point get_peak_C();
	static Triangle* Parse(string s);
};