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

class reader
{
public:
    friend istream& operator >> (istream& is, reader& r);
	friend ostream& operator << (ostream& os, reader r);
protected:
		Date date_of_creating_card;
		int month_of_valid;
};

class normalReader: public reader
{
public:
	friend istream& operator >> (istream& is, normalReader& norReader);
	friend ostream& operator << (ostream& os, normalReader norReader);
    int calcFee();
private:
	int id;
    string name;
    Date expirationDate;
    string sex;
    int num_of_book_borrowed_in_month;
};

class vipReader: public reader
{
public:
	friend istream& operator >> (istream& is, vipReader& vReader);
	friend ostream& operator << (ostream& os, vipReader vReader);
private:
	int id;
    string name;
    Date expirationDate;
    string sex;
};