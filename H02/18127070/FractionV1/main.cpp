#include"Fraction.h"

int main()
{
	Fraction a, b(1), c(3, 4);
	a.output();
	cout << endl;
	b.output();
	cout << endl;
	c.output();
	cout << endl;
	int n;
	cout << "Enter amount of fraction: ";
	cin >> n;
	Fraction* Fr = new Fraction[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Fraction[" << i + 1 << "] = ";
		Fr[i].input();
	}
	cout << "List of fraction: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Fraction[" << i + 1 << "] = ";
		Fr[i].output();
	}
}