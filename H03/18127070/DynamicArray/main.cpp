#include"Array.h"

int main()
{
	Array array;
	array.pushBack(1);
	array.pushBack(5);
	array.pushBack(3);
	array.pushBack(2);
	array.pushBack(6);
	array.pushBack(8);
	array.pushBack(7);
	array.createArray(6);
	for (size_t i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}