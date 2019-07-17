#include"Gate.h"
#pragma once

class PowerGate: public Gate
{
private:
	int power;
public:
	PowerGate();
	~PowerGate();
	void input()
	{
		cout << "The power of the hero: ";
		cin >> power;
	}
	int output()
	{
		return power;
	}
};