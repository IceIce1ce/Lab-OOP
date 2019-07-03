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
    cout << "ID: ";
    cin >> id;
	cout << "Name: ";
    fflush(stdin);
    getline(cin, name);
	cout << "Date of birth: ";
    cin >> dob;
	cout << "Address: ";
    cin >> address;
}
void employee::output()
{
    cout << "ID: " << id;
	cout << "Name: " << name;
	cout << "Date of birth: " << dob;
	cout << "Address: " << address;
}

void productionStaff::input()
{
	employee::input();
	cout << "Number of product: ";
    cin >> num_of_product;
}

unsigned int productionStaff::calcSalary()
{
	return num_of_product * 20000;
}

void productionStaff::output()
{
	employee::output();
	cout << "Number of product: " << num_of_product;
	cout << "Salary: " << calcSalary();
}

void dataller::input()
{
	employee::input();
	cout << "Date of work: ";
    cin >> date_of_work;
}

unsigned int dataller::calcSalary()
{
	return date_of_work * 300000;
}
void dataller::output()
{
	employee::output();
	cout << "Date of work: " << date_of_work;
	cout << "Salary: " << calcSalary();
}