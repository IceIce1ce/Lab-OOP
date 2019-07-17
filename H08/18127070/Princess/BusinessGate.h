#include"Gate.h"
#pragma once

class BusinessGate: public Gate
{
private:
	int unitPrice;
	int num_of_product;
public:
	BusinessGate();
	~BusinessGate();
	void input()
	{
		cout << "Unit price: ";
		cin >> unitPrice;
		cout << "Number of product: ";
		cin >> num_of_product;
	}
	int output()
	{
		return unitPrice * num_of_product;
	}
};