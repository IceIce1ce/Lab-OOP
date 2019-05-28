#include<iostream>
#include<math.h>
using namespace std;

typedef struct Fraction
{
	int nu, de;
}Fr;

void input(Fraction a[], int n);
void output(Fr a[], int n);
int gcd(int x, int y);
void sort(Fraction* a, int n, int (*compare)(Fraction, Fraction));
int compare_Asc(Fraction a, Fraction b);
int compare_Des(Fraction a, Fraction b);