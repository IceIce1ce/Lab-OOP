#include"Gate.h"
#include"BusinessGate.h"
#include"AcademicGate.h"
#include"PowerGate.h"

int main()
{
	int num_of_gate, type_of_gate;
	cout << "1. Business Gate" << endl;
	cout << "2. Academic Gate" << endl;
	cout << "3. Power Gate" << endl;
	cout << "Number of the gate: ";
	cin >> num_of_gate;
	Gate *arr[1000];
	for(int i = 0; i < num_of_gate; i++)
	{
		cout << "Enter type of gate: ";
		cin >> type_of_gate;
		if(type_of_gate == 1) arr[i] = new BusinessGate();
		if(type_of_gate == 2) arr[i] = new AcademicGate();
		if(type_of_gate == 3) arr[i] = new PowerGate();
		arr[i]->input();
	}
	int money, intellect, power;
	cout << "Information of Princess" << endl;
	cout << "Money: ";
	cin >> money;
	cout << "Intellect: ";
	cin >> intellect;
	cout << "Power: ";
	cin >> power;
	int i = 0;
	while(money > 0 && intellect > 0 && power > 0 && i < num_of_gate)
	{
		if(arr[i]->getTypeOfGate() == 1)
		{
			money -= arr[i]->output();
			if(money < 0)
			{
				cout << "Princess failed in gate " << i + 1;
				break;
			}
			else
			{
				cout << "Princess passed business gate [" << i + 1 << "]" << endl;
			}
		}
		if(arr[i]->getTypeOfGate() == 2)
		{
			if(arr[i]->output() > intellect)
			{
				cout << "Princess failed in gate " << i + 1;
				break;
			}
			else
			{
				cout << "Princess passed academic gate [" << i + 1 << "]" << endl;
			}
		}
		if(arr[i]->getTypeOfGate() == 3)
		{
			power -= arr[i]->output();
			if(power < 0)
			{
				cout << "Princess failed in gate " << i + 1;
				break;
			}
			else
			{
				cout << "Princess passed power gate [" << i + 1 << "]" << endl;
			}
		}
		if(i == num_of_gate - 1)
		{
			cout << "The prince rescued the princess successfully !" << endl;
			break;
		}
		cout << "Current parameters [" << money << ", " << intellect << ", " << power << "]" << endl;
		i++;
	}
	return 0;
}