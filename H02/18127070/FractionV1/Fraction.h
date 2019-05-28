#include<iostream>
using namespace std;

class Fraction
{
private:
	int nu, de;
public:
	Fraction();
	Fraction(int x);
	Fraction(int x, int y);
	void input();
	void output();
	~Fraction();
};