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

string Fraction::ToString()
{
	stringstream writer;
	writer << nu << "/" << de;
	return writer.str();
}

Fraction* Fraction::Parse(string s)
{
	vector<string> v = Tokenizer::Parse(s, "/");
	int num = stoi(v[0]);
	int denom = stoi(v[1]);
	Fraction* ans = new Fraction(num, denom);
	return ans;
}