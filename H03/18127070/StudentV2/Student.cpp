#include"Student.h"

student::student()
{
	first_name = "";
	middle_name = "";
	last_name = "";
}

student::~student()
{
	first_name.erase();
	middle_name.erase();
	last_name.erase();
}

student::student(string first_name, string middle_name, string last_name)
{
	this->first_name = first_name;
	this->middle_name = middle_name;
	this->last_name = last_name;
}

void student::setStudent(string first_name, string middle_name, string last_name)
{
	this->first_name = first_name;
	this->middle_name = middle_name;
	this->last_name = last_name;
}

string student::get_firstName()
{
	return first_name;
}

string student::get_middleName()
{
	return middle_name;
}

string student::get_lastName()
{
	return last_name;
}

void student::output()
{
	cout << "First name: " << first_name << endl;
	cout << "Middle name: " << middle_name << endl;
	cout << "Last name: " << last_name << endl;
	cout << "Full name: " << first_name + " " + middle_name + " " + last_name;
}