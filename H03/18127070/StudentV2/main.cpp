#include"Student.h"

int main()
{
	student st;
	string first_name, middle_name, last_name;
	cout << "Enter first name of student: ";
	getline(cin, first_name);
	cout << "Enter middle name of student: ";
	getline(cin, middle_name);
	cout << "Enter last name of student: ";
	getline(cin, last_name);
	st.setStudent(first_name, middle_name, last_name);
	st.output();
	return 0;
}