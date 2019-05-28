#include"Ex01.4.h"

int main()
{
	int a[] = { 0, 7, 0, 9 };
	int b[] = { 2, 4, 6, 0 };
	int x = sizeof(a) / sizeof(a[0]);
	int y = sizeof(b) / sizeof(b[0]);
	cout << "f = ";
	display(a, x);
	cout << endl;
	cout << "g = ";
	display(b, y);
	cout << endl;
	int* sum = poly_Add(a, b, x, y);
	int size = max(x, y);
	cout << "h = ";
	display(sum, size);
	return 0;
}