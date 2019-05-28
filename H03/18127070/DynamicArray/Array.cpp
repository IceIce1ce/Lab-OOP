#include"Array.h"

Array::Array()
{
	array = new int* [100];
	for (int i = 0; i < 100; i++)
		array[i] = 0;
	length = 100;
	index = 0;
}

Array::~Array()
{
	for (size_t i = 0; i < this->index; i++)
	{
		delete array[i];
	}
	delete[] array;
}

Array::Array(const Array& arr)
{
	this->length = arr.length;
	this->index = arr.index;
	this->array = new int* [this->length];
	for (size_t i = 0; i < this->index; i++)
	{
		this->array[i] = new int(*arr.array[i]);
	}
	initialize(128);
}

int& Array::operator[](const int size)
{
	if (size < 0 || size >= this->index) throw("OUT OF BOUNDS");
	return *this->array[size];
}

void Array::initialize(const int init = 128)
{
	for (size_t i = init; i < this->length; i++)
	{
		this->array[i] = 0;
	}
}

void Array::setArray()
{
	this->length *= 2;
	int** temp = new int* [this->length];
	for (size_t i = 0; i < this->index; i++)
	{
		temp[i] = this->array[i];
	}
	delete[] this->array;
	this->array = temp;
	initialize(this->index);
}

void Array::pushBack(const int& arr)
{
	if (this->index >= this->length) setArray();
	this->array[this->index++] = new int(arr);
}

void Array::createArray(int size)
{
	if (size < 0 || size >= this->index) throw("OUT OF BOUNDS!");
	delete this->array[size];
	for (size_t i = size; i < this->index - 1; i++)
	{
		this->array[i] = this->array[i + 1];
	}
	this->array[this->index--] = 0;
}