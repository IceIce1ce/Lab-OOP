#include<iostream>
#include<string>
using namespace std;

class student
{
private:
	string first_name, middle_name, last_name;
public:
	student();
	student(string first_name, string middle_name, string last_name);
	void setStudent(string first_name, string middle_name, string last_name);
	string get_firstName();
	string get_middleName();
	string get_lastName();
	void output();
	~student();
};