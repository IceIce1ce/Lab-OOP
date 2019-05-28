#include"Ex01.h"

int main()
{
	Fraction Fr1, Fr2;
	Fr1.input();
	cout << "Fraction 1: ";
	Fr1.output();
	Fr1.reduce();
	cout << "Fraction 1 has been reduced: ";
	Fr1.output();
	cout << "Inversion of fraction 1: ";
	Fraction inver1 = Fr1.inverse();
	inver1.output();

	Fr2.input();
	cout << "Fraction 2: ";
	Fr2.output();
	Fr2.reduce();
	cout << "Fraction 2 has been reduced: ";
	Fr2.output();
	cout << "Inversion of fraction 2: ";
	Fraction inver2 = Fr2.inverse();
	inver2.output();

	Fraction sum = Fr1.add(Fr2);
	cout << "Sum of two fraction: ";
	sum.reduce();
	sum.output();

	Fraction multi = Fr1.multiply(Fr2);
	cout << "Multi of two fraction: ";
	multi.reduce();
	multi.output();

	float comp = Fr1.compare(Fr2);
	if (comp == -1) cout << "Fraction 2 is bigger than fraction 1";
	else if (comp == 1) cout << "Fraction 1 is bigger than fraction 2";
	else cout << "Fraction 1 equals to fraction 2";

	return 0;
}