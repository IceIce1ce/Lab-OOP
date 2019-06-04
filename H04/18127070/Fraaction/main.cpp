#include"Fraction.h"

int main()
{
	Fraction f1, f2;
	try
	{
		cin >> f1 >> f2;
		Fraction f3(f2);
		cout << f3;
		Fraction f4 = f3;
		cout << f4;
		cout << "Sum = " << f1 + f2;
		cout << "Sub = " << f1 - f2;
		cout << "Multi = " << f1 * f2;
		cout << "Dev = " << f1 / f2;
		if (f1 == f2) cout << "f1 == f2" << endl;
		if (f1 != f2) cout << "f1 != f2" << endl;
		if (f1 >= f2) cout << "f1 >= f2" << endl;
		if (f1 > f2) cout << "f1 > f2" << endl;
		if (f1 <= f2) cout << "f1 <= f2" << endl;
		if (f1 < f2) cout << "f1 < f2" << endl;
		f1 = -7 + f1; cout << f1;
		f2 = f1 - 6; cout << f2;
		f1 += f2; cout << f1;
		f1 -= f2; cout << f1;
		f1 *= f2; cout << f1;
		f1 /= f2; cout << f1;
		cout << f1++;
		cout << ++f2;
		cout << f1--;
		cout << --f2;
	}
	catch (const char* msg)
	{
		cerr << msg;
	}
	return 0;
}