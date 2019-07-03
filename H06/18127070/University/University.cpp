#include"University.h"

void teacher::input()
{
    cout << "ID: ";
    cin >> id;
	cout << "Name: ";
    fflush(stdin);
    getline(cin, name);
	cout << "Coefficient salary: ";
    cin >> coeffSalary;
	cout << "Basic salary: ";
    cin >> basicSalary;
    cout << "Number of absent day: ";
    cin >> num_of_absent_day;
}

void teacher::output()
{
    cout << "ID: " << id;
	cout << "Name: " << name;
	cout << "Coefficient salary: " << coeffSalary;
	cout << "Basic salary: " << basicSalary;
    cout << "Number of absent day: " << num_of_absent_day;
    cout << "Salary: " << calcSalary();
}

void formTeacher::input()
{
	teacher::input();
	cout << "Form teacher of class: ";
    cin >> formTeacher_of_class;
}

int formTeacher::calcSalary_of_formTeacher()
{
	return (coeffSalary * basicSalary - num_of_absent_day * 100000) + 500000;
}

void formTeacher::output()
{
	teacher::output();
	cout << "Form teacher of class: " << formTeacher_of_class;
	cout << "Salary: " << calcSalary_of_formTeacher();
}