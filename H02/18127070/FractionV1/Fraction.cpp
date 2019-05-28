#include"Fraction.h"

Fraction::Fraction()
{
	nu = 0;
	de = 1;
}

Fraction::Fraction(int x)
{
	nu = x;
	de = 2;
}

Fraction::Fraction(int x, int y)
{
	nu = x;
	de = y;
}

void Fraction::input()
{
	cin >> nu >> de;
}

void Fraction::output()
{
	cout << nu << "/" << de;
}

Fraction::~Fraction()
{
}