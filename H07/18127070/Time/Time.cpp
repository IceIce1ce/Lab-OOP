#include"Time.h"

Time::Time()
{
	m_hour = m_minute = m_second = 0;
}

Time::~Time()
{
}

Time::Time(int hour, int minute, int second)
{
	m_hour = (hour >= 0 && hour <24) ? hour : 0;
	m_minute = (minute >= 0 && minute <60) ? minute : 0;
	m_second = (second >= 0 && second < 60) ? second : 0;
}

int Time::getHour()
{
	return m_hour;
}

int Time::getMinute()
{
	return m_minute;
}

int Time::getSecond()
{
	return m_second;
}

ostream& operator << (ostream& os, Time& t)
{
	time_t now = time(0);
	tm local;
	localtime_s(&local, &now);
	os << local.tm_hour << ":" << local.tm_min << ":" << local.tm_sec;
    return os;
}

istream& operator >> (istream& is, Time& t)
{
    is >> t.m_hour >> t.m_minute >> t.m_second;
    return is;
}

Time Time::operator+(Time& t)
{
	Time c;
	int a, b;
	a = (this->m_second + t.m_second) / 60;
	c.m_second = (this->m_second + t.m_second) % 60;
	b = (this->m_minute + t.m_minute + a) / 60;
	c.m_minute = (this->m_minute + t.m_minute + a) % 60;
	c.m_hour = m_hour + b + t.m_hour;
	return c;
}

string GmtTime::ToString(int gmt)
{
	stringstream writer;
	writer << gmt + m_hour << ":" << m_minute << ":" << m_second;
	return writer.str();
}