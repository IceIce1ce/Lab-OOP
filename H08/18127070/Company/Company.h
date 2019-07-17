#include<iostream>
#include<string>
#include<vector>

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
    virtual void input();
    virtual void output();
    virtual unsigned int calcSalary() = 0;
	virtual string getName();
	virtual string getID();
	virtual int getMonthOfBirth();
protected:
	string name;
	Date dos;
	string id;
	int monthOfBirth;
};

class officeStaff: public employee
{
public:
	void input();
	void output();
	unsigned int calcSalary();
private:
	int date_of_work;
	int subsidy;
	int basciSalary;
};

class productionStaff: public employee
{
public:
	void input();
	void output();
	unsigned int calcSalary();
private:
	int basicSalary;
	int num_of_product;
};

class managementStaff: public employee
{
public:
	void input();
	void output();
	unsigned int calcSalary();
private:
	int basicSalary;
	double positionCoefficient;
	int award;
};

struct Node
{
	unsigned int salary;
	int n;
	int type;
};

class Company
{
public:
	void addStaff();
	void outputStaff();
	void calcSalary();
	void findStaffHasMaxSalary();
	void listStaffHasSalary3000000();
	void findStaffByName();
	void findStaffById();
	void listStaffHasMob5();
private:
	vector<employee*> _officeStaff;
	vector<employee*> _productionStaff;
	vector<employee*> _managementStaff;
};