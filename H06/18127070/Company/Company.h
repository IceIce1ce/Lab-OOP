#include<iostream>
#include<string>

using namespace std;

class Date
{
public: 
    Date();
    ~Date();
    friend istream& operator >> (istream& is, Date& d);
	friend ostream& operator <<(ostream& os, Date d);
private:
	int date, month, year;
};

class employee
{
public:
    void input();
    void output();
    virtual unsigned int calcSalary() = 0;
protected:
	string name;
    int id;
	Date dob;
	string address;
};

class productionStaff: public employee
{
public:
	void input();
	void output();
	unsigned int calcSalary();
private:
	int num_of_product;
};

class dataller: public employee
{
public:
	void input();
	void output();
	unsigned int calcSalary();
private:
	int date_of_work;
};