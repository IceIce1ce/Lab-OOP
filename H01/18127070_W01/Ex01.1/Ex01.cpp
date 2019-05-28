#include"Ex01.h"

Fraction::Fraction()
{
	nu = 0;
	de = 1;
}

Fraction::Fraction(int nu1, int de1)
{
	nu = nu1;
	if (de1 != 0)
	{
		de = de1;
	}
	else
	{
		de = 1;
	}
}

void Fraction::input()
{
	cout << "Nu = ";
	cin >> nu;
	cout << "De = ";
	cin >> de;
}

void Fraction::output()
{
	cout << nu << "/" << de << "\n";
}

int Fraction::gcd(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return a + b;
	}
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}

void Fraction::reduce()
{
	int gcd1 = gcd(nu, de);
	nu = nu / gcd1;
	de = de / gcd1;
}

Fraction Fraction::add(const Fraction& Fr)
{
	return Fraction((nu * Fr.de) + (de * Fr.nu), de * Fr.de);
}

Fraction Fraction::multiply(const Fraction& Fr)
{
	return Fraction(nu * Fr.nu, de * Fr.de);
}

float Fraction::compare(const Fraction& Fr)
{
	float x = 1.0 * nu / de;
	float y = 1.0 * Fr.nu / Fr.de;
	if (x < y) return -1;
	if (x > y) return 1;
	else return 0;
}

Fraction Fraction::inverse()
{
	Fraction Fr;
	Fr.nu = de;
	Fr.de = nu;
	return Fr;
}

Fraction::~Fraction()
{
}