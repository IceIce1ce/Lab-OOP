#include"Date.h"

int check_leap_year(int year)
{
	int y = year;
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) return 1;
	return 0;
}

int number_of_date_in_year(int month, int year)
{
	if (check_leap_year(year) && month == 2) return 29;
	int number_of_date_in_year[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	return number_of_date_in_year[month];
}

int get_absolute_date(const int date, const int month, const int year)
{
	int d = date;
	int m = month;
	while (m > 1)
	{
		d += number_of_date_in_year(m - 1, year);
		--m;
	}
	return d;
}

Date::Date()
{
	m_date = 12;
	m_month = 06;
	m_year = 2019;
}

Date::~Date()
{
}

Date::Date(int date, int month, int year)
{
	m_date = date;
	m_month = month;
	m_year = year;
}

Date::Date(const Date& d)
{
	m_date = d.m_date;
	m_month = d.m_month;
	m_year = d.m_year;
}

int Date::getDate()
{
	return m_date;
}
int Date::getMonth()
{
	return m_month;
}
int Date::getYear()
{
	return m_year;
}

int Date::getToday()
{
	int today;
	if (get_absolute_date(m_date, m_month, m_year) % 7 == 0)
	{
		today = 0;
	}
	else
	{
		today = get_absolute_date(m_date, m_month, m_year) % 7 + 1;
	}
	return today;
}

bool Date::isLeapYear()
{
	if (check_leap_year(m_year) == 0) return true;
	else return false;
}

istream& operator >> (istream& is, Date& d)
{
	int m;
	cout << "Year: ";
	is >> d.m_year;
	cout << "Month: ";
	is >> m;
	while (m > 12)
	{
		cout << "Month must have smaller than 12, re-try again: ";
		is >> m;
	}
	d.m_month = m;
	cout << "Date: ";
	is >> d.m_date;
	while (d.m_date > number_of_date_in_year(d.m_month, d.m_year))
	{
		cout << "Date must have smaller than date in month, re-try again: ";
		is >> d.m_date;
	}
	return is;
}

ostream& operator << (ostream& os, Date& d)
{
	os << d.m_date;
	os << "/" << d.m_month;
	os << "/" << d.m_year;
	return os;
}

bool isValidDate(int day, int month, int year)
{
	 if (year > Max_Year ||  year < Min_Year) return false; 
    if (month < 1 || month > 12) return false; 
    if (day < 1 || day > 31) return false; 
    if (month == 2) 
    { 
        if (check_leap_year(year))  return (day <= 29); 
        else return (day <= 28); 
    } 
    if (month == 4 || month == 6 || month == 9 || month == 11) return (day <= 30); 
    return true; 
}

string Date::ToString()
{
	stringstream writer;
	writer << m_date << "/" << m_month << "/" << m_year;
	return writer.str();
}

Date* Date::Parse(string s)
{
	vector<string> v = Tokenizer::Parse(s, "/");
	int day = stoi(v[0]);
	int month = stoi(v[1]);
	int year = stoi(v[2]);
	Date * ans = new Date(day, month, year);
	return ans;
}