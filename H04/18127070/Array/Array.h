#include<iostream>
#include<assert.h>
using namespace std;

class Array
{
private:
	int* ptr;
	int size;
public:
	Array(int = 4);
	Array(int*, int);
	~Array();
	int getSize();
	Array& operator=(const Array& arr);
	int& operator[](int index);
	friend ostream& operator << (ostream& os, Array& arr);
	friend istream& operator >> (istream& os, Array& arr);
	explicit operator int() const;
};