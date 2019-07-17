#include"Company.h"

Date::Date()
{
    date = month = year = 0;
}

Date::~Date()
{
}

istream& operator >> (istream& is, Date& d)
{
    cout << "Date: "; 
    is >> d.date;
	cout << "Month: "; 
    is >> d.month;
	cout << "Year: ";
    is >> d.year;
	return is;
}

ostream& operator << (ostream& os, Date d)
{
	cout << d.date << "/" << d.month << "/" << d.year;
	return os;
}

void employee::input()
{
	cout << "Name: ";
    fflush(stdin);
	cin.ignore();
    getline(cin, name);
	cout << "Date of starting job: ";
    cin >> dos;
	cout << "ID: ";
	cin >> id;
	cout << "Month of birth: ";
	cin >> monthOfBirth;
}

void employee::output()
{
	cout << "Name: " << name << endl;
	cout << "Date of starting job: " << dos << endl;
	cout << "ID: " << id << endl;
	cout << "Month of birth: " << monthOfBirth << endl;
}

void officeStaff::input()
{
	employee::input();
	cout << "Basic salary: " << endl;
	cin >> basciSalary;
	cout << "Date of work: " << endl;
    cin >> date_of_work;
	cout << "Subsidy: " << endl;
	cin >> subsidy;
}

unsigned int officeStaff::calcSalary()
{
	return basciSalary + date_of_work * 100000 + subsidy;
}

void officeStaff::output()
{
	employee::output();
	cout << "Basic salary: " << basciSalary << endl;
	cout << "Date of work: " << date_of_work << endl;
	cout << "Subsidy: " << subsidy << endl;
	cout << "Salary: " << calcSalary() << endl;;
}

void productionStaff::input()
{
	employee::input();
	cout << "Basic salary: " << endl;
	cin >> basicSalary;
	cout << "Number of product: " << endl;
    cin >> num_of_product;
}

unsigned int productionStaff::calcSalary()
{
	return basicSalary + num_of_product * 2000;
}

void productionStaff::output()
{
	employee::output();
	cout << "Number of product: " << num_of_product << endl;
	cout << "Salary: " << calcSalary() << endl;
}

void managementStaff::input()
{
	employee::input();
	cout << "Basic salary: " << endl;
	cin >> basicSalary;
	cout << "Position coefficient: " << endl;
	cin >> positionCoefficient;
	cout << "Award: " << endl;
    cin >> award;
}

unsigned int managementStaff::calcSalary()
{
	return basicSalary * positionCoefficient + award;
}

void managementStaff::output()
{
	employee::output();
	cout << "Basic salary: " << basicSalary << endl;
	cout << "Position coefficient: " << positionCoefficient << endl;
	cout << "Award: " << award << endl;
	cout << "Salary: " << calcSalary() << endl;
}

void Company::addStaff()
{
	employee* e;
	int choice;
	do
	{
		system("cls");
		cout << "1. Add office staff" << endl;
		cout << "2. Add production staff" << endl;
		cout << "3. Add management staff" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			{
				e = new officeStaff;
				e->input();
				_officeStaff.push_back(e);
			}
			break;
		case 2:
			{
				e = new productionStaff;
				e->input();
				_productionStaff.push_back(e);
			}
			break;
		case 3:
			{
				e = new managementStaff;
				e->input();
				_managementStaff.push_back(e);
			}
			break;
		default:
			cout << "Wrong input, try again !";
			break;
		}
	} while (choice != 4);
}

void Company::outputStaff()
{
	int choice;
	do
	{
		system("cls");
		cout << "1. List of office staff" << endl;
		cout << "2. List of production staff" << endl;
		cout << "3. List of management staff." << endl;
		cout << "4. Back to menu" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			{
				system("cls");
				cout << "\nList of office staff: ";
				for(int i=0; i < _officeStaff.size(); i++)
				{
					_officeStaff[i]->output();
				}
				system("pause>pls");
			}
			break;
		case 2:
			{
				system("cls");
				cout << "\nList of production staff: ";
				for(int i=0; i < _productionStaff.size();i++)
				{
					_productionStaff[i]->output();
				}
				system("pause>pls");
			}
			break;
		case 3:
			{
				system("cls");
				cout << "\nList of management staff: ";
				for(int i=0; i < _managementStaff.size();i++)
				{
					_managementStaff[i]->output();
				}
				system("pause>pls");
			}
			break;
		default:
			cout << "Wrong input, try again !";
			break;
		}
	} while (choice != 4);
}

void Company::calcSalary()
{
	int choice;
	unsigned int s1 = 0, s2 = 0, s3 = 0;
	do
	{
		system("cls");
		cout<<"1. Calc total salary of office staff" << endl;;
		cout<<"2. Calc total salary of production staff" << endl;
		cout<<"3. Calc total salary of management staff" << endl;
		cout<<"4. Calc average salary of company" << endl;
		cout<<"5. Back to menu" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			{
				system("cls");
				for(int i=0; i < _officeStaff.size();i++)
				{
					s1+= _officeStaff[i]->calcSalary();
				}
				cout<<"Total salary of office staff is: " << endl;
				cout<<"Salary: " << s1;
				system("pause>pls");
			}
			break;
		case 2:
			{
				system("cls");
				for(int i=0; i < _productionStaff.size(); i++)
				{
					s2+= _productionStaff[i]->calcSalary();
				}
				cout<<"Total salary of production staff is: " << endl;
				cout<<"Salary: " << s2;
				system("pause>pls");
			}
			break;
		case 3:
			{
				system("cls");
				for(int i=0; i < _managementStaff.size(); i++)
				{
					s3+= _managementStaff[i]->calcSalary();
				}
				cout<<"Total salary of management staff is: " << endl;
				cout<<"Salary:" << s3;
				system("pause>pls");
			}
			break;
		case 4:
			{
				system("cls");
				cout<<"Average salary of company is: " << endl;
				cout<<"Total salary: " << (s1+s2+s3) / 3;
				system("pause>pls");
			}
			break;
		default:
			cout << "Wrong input, try again !";
			break;
		}
	} while (choice != 5);
}

void Company::findStaffHasMaxSalary()
{
	system("cls");
	Node node;
	cout << "Staff has max salary is: ";
	node.salary = _officeStaff[0]->calcSalary();
	node.n = 0;
	node.type = 1;
	for(int i=1; i < _officeStaff.size(); i++)
	{
		if(_officeStaff[i]->calcSalary() > node.salary)
		{
			node.salary = _officeStaff[i]->calcSalary();
			node.n = i;
			node.type = 1;
		}
	}
	for(int i=0; i < _productionStaff.size(); i++)
	{
		if(_productionStaff[i]->calcSalary() > node.salary)
		{
			node.salary = _productionStaff[i]->calcSalary();
			node.n = i;
			node.type = 2;
		}
	}
	for(int i=0; i < _managementStaff.size(); i++)
	{
		if(_managementStaff[i]->calcSalary() > node.salary)
		{
			node.salary = _managementStaff[i]->calcSalary();
			node.n = i;
			node.type = 3;
		}
	}
	if(node.type == 1) _officeStaff[node.n]->output();
	else if(node.type == 2) _productionStaff[node.n]->output();
	else if(node.type == 3) _managementStaff[node.n]->output();
	system("pause>pls");
}

void Company::listStaffHasSalary3000000()
{
	system("cls");
	cout << "List of staff has salary less than 3000000: ";
	for(int i = 0; i < _officeStaff.size(); i++)
	{
		if(_officeStaff[i]->calcSalary() < 3000000)
		{
			_officeStaff[i]->output();
		}
	}
	for(int i = 0; i < _productionStaff.size(); i++)
	{
		if(_productionStaff[i]->calcSalary() < 3000000)
		{
			_productionStaff[i]->output();
		}
	}
	for(int i = 0; i < _managementStaff.size(); i++)
	{
		if(_managementStaff[i]->calcSalary() < 3000000)
		{
			_managementStaff[i]->output();
		}
	}
}

string employee::getName()
{
	return name;
}

string employee::getID()
{
	return id;
}

int employee::getMonthOfBirth()
{
	return monthOfBirth;
}

void Company::findStaffByName()
{
	system("cls");
	string _name;
	cout << "Enter name of staff that you want to search: ";
	cin >> _name;
	for(int i = 0; i < _officeStaff.size(); i++)
	{
		if(_officeStaff[i]->getName() == _name)
		{
			_officeStaff[i]->output();
		}
	}
	for(int i = 0; i < _productionStaff.size(); i++)
	{
		if(_productionStaff[i]->getName() == _name)
		{
			_productionStaff[i]->output();
		}
	}
	for(int i = 0; i < _managementStaff.size(); i++)
	{
		if(_managementStaff[i]->getName() == _name)
		{
			_managementStaff[i]->output();
		}
	}
}

void Company::findStaffById()
{
	system("cls");
	string _id;
	cout << "Enter id of staff that you want to find: ";
	cin >> _id;
	for(int i = 0; i < _officeStaff.size(); i++)
	{
		if(_officeStaff[i]->getID() == _id)
		{
			_officeStaff[i]->output();
		}
	}
	for(int i = 0; i < _productionStaff.size(); i++)
	{
		if(_productionStaff[i]->getID() == _id)
		{
			_productionStaff[i]->output();
		}
	}
	for(int i = 0; i < _managementStaff.size(); i++)
	{
		if(_managementStaff[i]->getID() == _id)
		{
			_managementStaff[i]->output();
		}
	}
}

void Company::listStaffHasMob5()
{
	system("cls");
	cout << "List of staff has date of birth in May: ";
	for(int i = 0; i < _officeStaff.size(); i++)
	{
		if(_officeStaff[i]->getMonthOfBirth() == 5)
		{
			_officeStaff[i]->output();
		}
	}
	for(int i = 0; i < _productionStaff.size(); i++)
	{
		if(_productionStaff[i]->getMonthOfBirth() == 5)
		{
			_productionStaff[i]->output();
		}
	}
	for(int i = 0; i < _managementStaff.size(); i++)
	{
		if(_managementStaff[i]->getMonthOfBirth() == 5)
		{
			_managementStaff[i]->output();
		}
	}
}