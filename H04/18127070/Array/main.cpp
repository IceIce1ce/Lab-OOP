#include"Array.h"

int main()
{
	try
	{
		Array m1(7), m2;
		Array m3(m2);
		cout << "Array m1 size is: " << m1.getSize() << endl;
		cout << "Array m2 size is: " << m2.getSize() << endl;
		cout << "Array m3 size is: " << m3.getSize() << endl;
		cout << "Input 14 intergers for the arrays: ";
		cin >> m1 >> m2;
		cout << "arr1[]: " << m1 << "arr2[]: " << m2;
		Array m4(m2);
		Array m5;
		m5 = m2;
		cin >> m2;
		cout << m2;
		cout << m3[7];
		m3[7] = 1;
		cout << (int)m4;
		int a[100];
		int n = 7;
		for (int i = 0; i < n; i++)
		{
			a[i] = i * 2 / 7;
		}
		Array m6(a, n);
	}
	catch (const char* msg)
	{
		cerr << msg;
	}
	return 0;
}