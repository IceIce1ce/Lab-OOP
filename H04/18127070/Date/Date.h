#include<iostream>
using namespace std;

class Date
{
private:
	int m_date, m_month, m_year;
public:
	Date();
	Date(int year);
	Date(int month, int year);
	~Date();
	Date(int date, int month, int year);
	//Date(int date_in_year, int year);
	Date(const Date& d);
	int getDate();
	int getMonth();
	int getYear();
	int getToday();
	int get_date_in_year();
	int get_week_in_year();
	bool isLeapYear();
	int compare(const Date& d);
	double calc_distance(const Date& d);
	void sum_date(int date);
	void sum_month(int month);
	void sum_year(int year);
	Date& operator ++();
	Date operator ++(int);
	Date& operator --();
	Date operator --(int);
	Date operator + (const int date);
	Date operator - (const int date);
	bool operator > (const Date& d);
	bool operator < (const Date& d);
	bool operator == (const Date& d);
	bool operator >= (const Date& d);
	bool operator <= (const Date& d);
	bool operator != (const Date& d);
	friend istream& operator >> (istream& is, Date& d);
	friend ostream& operator << (ostream& os, Date& d);
	Date& operator = (const Date& d);
	explicit operator int() const;
	explicit operator long() const;
	Date& operator += (int date);
	Date& operator -= (int date);
};