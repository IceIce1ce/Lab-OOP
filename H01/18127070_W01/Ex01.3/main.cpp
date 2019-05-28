#include"Ex01.3.h"

int main()
{
	int array1[7] = { 7, 5, 4, 3, 9, 8, 6 };
	double array2[5] = { 4.3, 2.5, -0.9, 10.2, 3.0 };
	cout << "Integer array after sorting ascending: ";
	Ascending(array1, 7);
	cout << endl;
	cout << "Double array after sorting descending: ";
	Ascending(array2, 5);
	return 0;
}