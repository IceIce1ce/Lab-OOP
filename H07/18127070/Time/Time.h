#include<iostream>
#include<sstream>
#include<string>
#include<time.h>

using namespace  std;

class Time
{
protected:
	int m_hour, m_minute, m_second;
public:
	Time();
	~Time();
	Time(int hour, int minute, int second);
	int getHour();
	int getMinute();
	int getSecond();
	friend ostream& operator << (ostream& out, Time& t);
	friend istream& operator >> (istream& is, Time& t);
	Time operator + (Time& t);
};

class GmtTime: public Time
{
public:
	string ToString(int gmt);
};