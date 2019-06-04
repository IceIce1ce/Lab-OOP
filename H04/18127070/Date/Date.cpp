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

void find_date_and_month(int& date, int year, int& output_month)
{
	output_month = 1;
	for (int i = 0; i < 12; i++)
	{
		int temp = number_of_date_in_year(i, year);
		if (date > temp)
		{
			date = date - temp;
			++output_month;
		}
		else break;
	}
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
	m_date = 04;
	m_month = 06;
	m_year = 2019;
}

Date::Date(int year)
{
	m_year = year;
}

Date::Date(int month, int year)
{
	m_month = month;
	m_year = year;
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

/*Date::Date(int date_in_year, int year)
{
	int month;
	find_date_and_month(date_in_year, year, month);
	Date(date_in_year, month, year);
}*/

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

int Date::get_date_in_year()
{
	return get_absolute_date(m_date, m_month, m_year);
}

int Date::get_week_in_year()
{
	return get_absolute_date(m_date, m_month, m_year) / 7;
}

bool Date::isLeapYear()
{
	if (check_leap_year(m_year) == 0) return true;
	else return false;
}

int Date::compare(const Date& d)
{
	if (m_year > d.m_year) return 1;
	if (m_year == d.m_year)
	{
		if (m_month > d.m_month) return 1;
		if (m_month < d.m_month) return -1;
		if (m_month == d.m_month)
		{
			if (m_date > d.m_date) return 1;
			if (m_date < d.m_date) return -1;
			if (m_date == d.m_date) return 0;
		}
	}
	return -1;
}

double Date::calc_distance(const Date& d)
{
	int d1, d2;
	d1 = get_absolute_date(m_date, m_month, m_year);
	d2 = get_absolute_date(d.m_date, d.m_month, d.m_year);
	if (d2 >= d1) return d2 - d1;
	else return d1 - d2;
}

void Date::sum_date(int date)
{
	if ((getDate() + date) < number_of_date_in_year(m_month, m_year))
	{
		m_date += date;
	}
	else
	{
		m_date = (getDate() + date) - number_of_date_in_year(m_month, m_year);
		m_month = m_month + 1;
	}
}

void Date::sum_month(int month)
{
	if ((getMonth() + month) < 12)
	{
		m_month += month;
	}
	else
	{
		m_month = (getMonth() + month) % 12;
		m_year = m_year + (getMonth() + month) / 12;
	}
}

void Date::sum_year(int year)
{
	m_year += year;
}

Date& Date::operator ++()
{
	if (m_date + 1 < number_of_date_in_year(m_month, m_year))
	{
		m_date++;
	}
	else
	{
		m_date = 1;
		if (m_month + 1 > 12)
		{
			m_month = 1;
			m_year++;
		}
		else m_month++;
	}
	return *this;
}

Date Date::operator ++ (int)
{
	if (m_date + 1 < number_of_date_in_year(m_month, m_year))
	{
		m_date++;
	}
	else
	{
		m_date = 1;
		if (m_month + 1 > 12)
		{
			m_month = 1;
			m_year++;
		}
		else m_month++;
	}
	return *this;
}

Date& Date::operator --()
{
	if (m_date - 1 > 1 && m_date - 1 <= number_of_date_in_year(m_month, m_year))
	{
		m_date--;
	}
	else
	{
		m_date = number_of_date_in_year(m_month, m_year);
		if (m_month - 1 == 12)
		{
			m_month = 12;
			m_year--;
		}
		else m_month--;
	}
	return *this;
}

Date Date::operator -- (int)
{
	if (m_date - 1 > 1 && m_date - 1 <= number_of_date_in_year(m_month, m_year))
	{
		m_date--;
	}
	else
	{
		m_date = number_of_date_in_year(m_month, m_year);
		if (m_month - 1 == 12)
		{
			m_month = 12;
			m_year--;
		}
		else m_month--;
	}
	return *this;
}

Date Date::operator + (int date)
{
	Date temp;
	if ((getDate() + date) < number_of_date_in_year(m_month, m_year))
	{
		temp.m_date = m_date + date;
	}
	else
	{
		temp.m_date = (getDate() + date) - number_of_date_in_year(m_month, m_year);
		temp.m_month = m_month + 1;
		temp.m_year = m_year;
	}
	return temp;
}

Date Date::operator - (int date)
{
	Date temp;
	if ((getDate() - date) > 0)
	{
		temp.m_date = m_date - date;
		temp.m_month = m_month;
		temp.m_year = m_year;
	}
	else
	{
		if ((getDate() - date) < 0)
		{
			temp.m_date = number_of_date_in_year(m_month, m_year) - (date - getDate());
			temp.m_month = m_month - 1;
			temp.m_year = m_year;
		}
		else
		{
			temp.m_date = number_of_date_in_year(m_month, m_year);
		}
	}
	return temp;
}

bool Date::operator > (const Date& d)
{
	return compare(d) > 0;
}

bool Date::operator < (const Date& d)
{
	return compare(d) < 0;
}

bool Date::operator == (const Date& d)
{
	return compare(d) == 0;
}

bool Date::operator >= (const Date& d)
{
	return compare(d) >= 0;
}

bool Date::operator <= (const Date& d)
{
	return compare(d) <= 0;
}

bool Date::operator != (const Date& d)
{
	return compare(d) != 0;
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

Date& Date::operator = (const Date& d)
{
	if (this != &d)
	{
		m_date = d.m_date;
		m_month = d.m_month;
		m_year = d.m_year;
	}
	return *this;
}

Date::operator int() const
{
	return (int)m_date;
}

Date::operator long() const
{
	return (long)(m_date, m_month, m_year);
}

Date& Date::operator += (int date)
{
	Date temp = *this;
	temp.m_date = m_date + date;
	return temp;
}

Date& Date::operator -= (int date)
{
	Date temp = *this;
	temp.m_date = m_date - date;
	return temp;
}