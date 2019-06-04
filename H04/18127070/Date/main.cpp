#include"Date.h"

int main()
{
	Date d1;
	Date d2(2, 1, 2012);
	Date d3(2, 8, 2012);
	Date d4(17, 10, 2012);
	Date d5(d2);
	Date d6;
	d6 = d3;
	cout << "d6 = " << d3.getDate() + 1 << "/" << d3.getMonth() << "/" << d3.getYear() << endl;
	cout << "d5 = " << d2.getDate() - 1 << "/" << d2.getMonth() << "/" << d2.getYear() << endl;
	cout << (d6 == d4) << endl;
	cout << (d6 != d4) << endl;
	cout << (d6 >= d4) << endl;
	cout << (d6 <= d4) << endl;
	cout << (d6 > d4) << endl;
	cout << (d6 < d4) << endl;
	d3 = d2 + 1;
	d2 = d3 - 2;
	d4++;
	++d2;
	d5--;
	--d6;
	cout << d3 << endl;
	cin >> d4;
	cout << (int)d3 << endl;
	cout << (long)d4;
	Date d7;
	d7 += 7;
	d2 -= 6;
	return 0;
}