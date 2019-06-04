#include"Fraction.h"

void Fraction::set(int a, int b)
{
	this->nu = a;
	this->de = b;
}

Fraction Fraction::reduce()
{
	int z = gcd(nu, de);
	return Fraction(nu / z, de / z);
}

int Fraction::gcd(int a, int b)
{
	int x;
	while (a % b != 0)
	{
		x = a % b;
		a = b;
		b = x;
	}
	return b;
}

Fraction Fraction::operator-()
{
	return Fraction(-nu, de);
}

void Fraction::standard()
{
	this->reduce();
	if (this->nu < 0 && this->de < 0)
	{
		this->nu = abs(this->nu);
		this->de = abs(this->de);
	}
	else if (this->de < 0)
	{
		this->nu = -abs(this->nu);
		this->de = abs(this->de);
	}
}

Fraction& Fraction::operator++()
{
	*this = *this + 1;
	return *this;
}

Fraction Fraction::operator++(int)
{
	Fraction temp = *this;
	nu += de;
	reduce();
	return temp;
}

Fraction& Fraction::operator--()
{
	nu -= de;
	reduce();
	return *this;
}

Fraction Fraction::operator--(int)
{
	Fraction temp = *this;
	nu -= de;
	reduce();
	return temp;
}

Fraction::Fraction()
{
	nu = 0;
	de = 1;
}

Fraction::Fraction(int x, int y)
{
	set(x, y);
}

Fraction::Fraction(int x)
{
	set(x, 1);
}

Fraction::~Fraction()
{
}

Fraction operator + (Fraction a, Fraction b)
{
	a = a.reduce();
	b = b.reduce();
	Fraction ans(a.nu * b.de + a.de * b.nu, a.de * b.de);
	ans = ans.reduce();
	return ans;
}

Fraction operator - (Fraction a, Fraction b)
{
	a = a.reduce();
	b = b.reduce();
	Fraction ans(a.nu * b.de - a.de * b.nu, a.de * b.de);
	ans = ans.reduce();
	return ans;
}

Fraction operator * (Fraction a, Fraction b)
{
	a = a.reduce();
	b = b.reduce();
	Fraction ans(a.nu * b.nu, a.de * b.de);
	ans = ans.reduce();
	return ans;
}

Fraction operator / (Fraction a, Fraction b)
{
	a = a.reduce();
	b = b.reduce();
	Fraction ans(a.nu * b.de, a.de * b.nu);
	ans = ans.reduce();
	return ans;
}

bool operator > (Fraction a, Fraction b)
{
	return (a.nu * b.de > a.de * b.nu);
}

bool operator < (Fraction a, Fraction b)
{
	return (a.nu * b.de < a.de * b.nu);
}

bool operator == (Fraction a, Fraction b)
{
	return (a.nu * b.de == a.de * b.nu);
}

bool operator >= (Fraction a, Fraction b)
{
	return (a > b || a == b);
}

bool operator <= (Fraction a, Fraction b)
{
	return (a < b || a == b);
}

bool operator != (Fraction a, Fraction b)
{
	return !(a == b);
}

ostream& operator << (ostream& os, Fraction a)
{
	a.standard();
	if (a.de == 1) os << a.nu << endl;
	else os << a.nu << "/" << a.de << "\n";
	return os;
}

istream& operator >> (istream& is, Fraction& a)
{
	is >> a.nu >> a.de;
	if (a.de == 0) throw "Wrong input";
	return is;
}

Fraction& Fraction::operator = (const Fraction& a)
{
	if (this != &a)
	{
		nu = a.nu;
		de = a.de;
	}
	return *this;
}

Fraction& Fraction::operator += (const Fraction& a)
{
	return *this = (*this + a);
}

Fraction& Fraction::operator -= (const Fraction& a)
{
	return *this = (*this - a);
}

Fraction& Fraction::operator *= (const Fraction& a)
{
	return *this = (*this * a);
}

Fraction& Fraction::operator /= (const Fraction& a)
{
	return *this = (*this / a);
}