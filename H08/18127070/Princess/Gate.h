#include<iostream>
#pragma once

using namespace std;

class Gate
{
protected:
	int type_of_gate;
public:
	Gate();
	~Gate();
	virtual void input() = 0;
	virtual int output()  = 0;
	int getTypeOfGate()
	{
		return type_of_gate;
	}
};