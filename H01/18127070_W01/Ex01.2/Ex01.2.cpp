#include"Ex01.2.h"

void input(Fraction a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "]: ";
		cout << "Nu = ";
		cin >> a[i].nu;
		cout << "De = ";
		cin >> a[i].de;
	}
}

void output(Fr a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i].nu << "/" << a[i].de;
	}
}

int gcd(int x, int y)
{
	x = abs(x);
	y = abs(y);
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}

void sort(Fraction *a, int n, int (*compare)(Fraction, Fraction)) 
{
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = i + 1; j < n; j++) 
		{
			if (compare(a[i], a[j]) == 1) 
			{
				Fraction temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int compare_Asc(Fraction a, Fraction b) 
{
	return 1;
}

int compare_Des(Fraction a, Fraction b) 
{
	return 1;
}