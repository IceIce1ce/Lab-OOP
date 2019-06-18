#include<iostream>
#include<string>
#include<sstream>
#include"Tokenizer.h"
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
	string ToString();
	static Fraction* Parse(string s);
	~Fraction();
};