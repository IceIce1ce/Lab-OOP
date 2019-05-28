#include<iostream>
using namespace std;

template<class T1, class T2>
void Ascending(T1* arr, T2 n)
{
	T1 temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << " " << arr[i];
	}
}

template<class T1, class T2>
void Descending(T1* arr, T2 n)
{
	T1 temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << " " << arr[i];
	}
}