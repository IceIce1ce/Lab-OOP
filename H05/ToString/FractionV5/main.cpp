#include"Fraction.h"

int main()
{
	Fraction *p = new Fraction(6, 12);
	cout << p->ToString() << endl;
	delete p;
	Fraction* ans = Fraction::Parse("6/12");
	string s = ans->ToString();
	cout << s;
	return 0;
}