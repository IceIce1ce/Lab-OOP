#include<iostream>
using namespace std;

class Fraction
{
private:
	int nu, de;
	int gcd(int a, int b);
public:
	Fraction();
	Fraction(int nu1, int de1);
	void input();
	void output();
	void reduce();
	Fraction add(const Fraction&);
	Fraction multiply(const Fraction&);
	float compare(const Fraction&);
	Fraction inverse();
	~Fraction();
};