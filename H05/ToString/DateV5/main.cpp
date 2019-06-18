#include"Date.h"

int main()
{
	time_t now = time(0);
	tm local;
	localtime_s(&local, &now);
	cout << local.tm_hour << ":" << local.tm_min << ":" << local.tm_sec << endl; 
	cout << local.tm_mday << "/" << local.tm_mon << "/" << local.tm_year + 1900 << endl;
	Date* d = new Date(1, 1, 2019);
	cout << "Date: " << d->ToString() << endl;
	delete d;
	Date* ans = Date::Parse("24/12/2018");
	string s = ans->ToString();
	cout << s;
	return 0;
}