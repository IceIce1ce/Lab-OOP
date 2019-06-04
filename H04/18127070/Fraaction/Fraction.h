#include<iostream>
#include<math.h>
using namespace std;

class Fraction
{
private:
	int nu, de, gcd(int, int);
public:
	Fraction();
	Fraction(int x, int y);
	Fraction(int x);
	~Fraction();
	void set(int, int);
	Fraction reduce();
	void standard();
	friend Fraction operator + (Fraction a, Fraction b);
	friend Fraction operator - (Fraction a, Fraction b);
	friend Fraction operator * (Fraction a, Fraction b);
	friend Fraction operator / (Fraction a, Fraction b);
	friend bool operator > (Fraction a, Fraction b);
	friend bool operator < (Fraction a, Fraction b);
	friend bool operator == (Fraction a, Fraction b);
	friend bool operator >= (Fraction a, Fraction b);
	friend bool operator <= (Fraction a, Fraction b);
	friend bool operator != (Fraction a, Fraction b);
	Fraction& operator = (const Fraction& a);
	Fraction& operator += (const Fraction& a);
	Fraction& operator -= (const Fraction& a);
	Fraction& operator *= (const Fraction& a);
	Fraction& operator /= (const Fraction& a);
	Fraction& operator ++();
	Fraction operator ++(int);
	Fraction& operator --();
	Fraction operator --(int);
	Fraction operator-();
	friend ostream& operator << (ostream& os, Fraction a);
	friend istream& operator >> (istream& is, Fraction& a);
	Fraction(const Fraction& a) : nu(a.nu), de(a.de) {};
};