#include<iostream>
#include<string>

using namespace std;

class teacher
{
protected:
    int id;
    string name;
    float coeffSalary;
    int basicSalary;
    int num_of_absent_day;
public:
    void input();
    void output();
    int calcSalary() { return (coeffSalary * basicSalary - num_of_absent_day * 100000); }
};

class formTeacher: public teacher
{
public:
	void input();
	void output();
	int calcSalary_of_formTeacher();
private:
    string formTeacher_of_class;
};