#include"Ex01.4.h"

int *poly_Add(int a[], int b[], int x, int y)
{
	int size = max(x, y);
	int *sum = new int[size];
	for (int i = 0; i < x; i++)
	{
		sum[i] = a[i];
	}
	for (int i = 0; i < y; i++)
	{
		sum[i] += b[i];
	}
	return sum;
}

void display(int poly[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << poly[i];
		if (i != 0)
		{
			cout << "x" << "^" << i;
		}
		if (i != n - 1)
		{
			cout << " + ";
		}
	}
}

int max(int m, int n) 
{ 
	return (m > n) ? m : n; 
}