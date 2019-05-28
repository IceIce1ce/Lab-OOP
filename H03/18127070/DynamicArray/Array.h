#include<iostream>
using namespace std;

class Array
{
private:
	int** array;
	int length, index;
public:
	Array();
	~Array();
	Array(const Array& arr);
	int& operator[] (const int size);
	void initialize(int init);
	void setArray();
	void pushBack(const int& arr);
	void createArray(int size);
	inline const int& size()const { return this->index; }
};