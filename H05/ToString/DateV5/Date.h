#include<iostream>
#include<time.h>
#include<string>
#include<sstream>
#include"Tokenizer.h"
using namespace std;
const int Max_Year = 9999; 
const int Min_Year = 1000; 

class Date
{
private:
	int m_date, m_month, m_year;
public:
	Date();
	~Date();
	Date(int date, int month, int year);
	Date(const Date& d);
	int getDate();
	int getMonth();
	int getYear();
	int getToday();
	bool isLeapYear();
	bool isValidDate(int, int, int);
	friend istream& operator >> (istream& is, Date& d);
	friend ostream& operator << (ostream& os, Date& d);
	string ToString();
	static Date* Parse(string s);
};