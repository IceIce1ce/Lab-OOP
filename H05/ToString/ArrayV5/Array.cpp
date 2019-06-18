#include"Array.h"

Array::Array(int array_size)
{
	size = array_size;
	ptr = new int[size];
	assert(ptr != 0);
	for (int i = 0; i < size; i++)
		ptr[i] = 0;
}

Array::Array(int* ptr, int n)
{
	size = n;
	ptr = new int[size];
	for(int i = 0; i < size; i++)
		this->ptr[i] = ptr[i];
}

Array::~Array()
{
	delete[] ptr;
}

int Array::getSize()
{
	return size;
}

int& Array::operator[](int index)
{
	assert((index >= 0) && (index < size));
	return ptr[index];
}

Array& Array::operator = (const Array& arr)
{
	if (&arr != this)
	{
		delete[] ptr;
		size = arr.size;
		ptr = new int[size];
		assert(ptr != 0);
		for (int i = 0; i < size; i++)
			ptr[i] = arr.ptr[i];
	}
	return *this;
}

istream& operator >> (istream& is, Array& arr)
{
	for (int i = 0; i < arr.size; i++)
		is >> arr.ptr[i];
	return is;
}

ostream& operator << (ostream& os, Array& arr)
{
	int i;
	for (i = 0; i < arr.size; i++)
	{
		os << arr.ptr[i] << " ";
		if ((i + 1) % 10 == 0)
			os << endl;
	}
	if (i % 10 != 0)
		os << endl;
	return os;
}

Array::operator int() const
{
	return (int)* ptr;
}

string Array::ToString()
{
	stringstream writer;
	for(int i = 0; i < 4; i++)
	{
		writer << ptr[i] << " ";
	}
	return writer.str();
}