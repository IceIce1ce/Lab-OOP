#include"Gate.h"
#pragma once 

class AcademicGate: public Gate
{
private:
	int intellect;
public:
	AcademicGate();
	~AcademicGate();
	void input()
	{
		cout << "The intellect of the sage: ";
		cin >> intellect;
	}
	int output()
	{
		return intellect;
	}
};