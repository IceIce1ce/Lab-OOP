#include"Library.h"

Date::Date()
{
    date = month = year = 0;
}

Date::~Date()
{
}

istream& operator >> (istream& is, Date& d)
{
    cout << "Date: "; 
    is >> d.date;
	cout << "Month: "; 
    is >> d.month;
	cout << "Year: ";
    is >> d.year;
	return is;
}

ostream& operator << (ostream& os, Date d)
{
	cout << d.date << "/" << d.month << "/" << d.year;
	return os;
}

istream& operator >> (istream& is, reader& r)
{
	cout << "Date of creating card: ";
	is >> r.date_of_creating_card;
	cout << "Month of valid: ";
	is >> r.month_of_valid;
	return is;
}

ostream& operator << (ostream& os, reader r)
{
	os << "Date of creating card: " << r.date_of_creating_card;
	os << "Month of valid: " << r.month_of_valid;
	return os;
}

istream& operator >> (istream& is, normalReader& norReader)
{
	reader* r = static_cast<reader*>(&norReader);
	is >> *r;
    cout << "ID: ";
    is >> norReader.id;
	cout << "Name: ";
	fflush(stdin);
	getline(is, norReader.name);
    cout << "Expiration date: ";
    is >> norReader.expirationDate;
    cout << "Sex: ";
    is >> norReader.sex;
    cout << "Number of book borrowed in a month: ";
    is >> norReader.num_of_book_borrowed_in_month;
	return is;
}

ostream& operator << (ostream &os, normalReader norReader)
{
	reader r = static_cast<reader>(norReader);
	os << r;
	os << "ID: "<< norReader.id;
	os << "Name: " << norReader.name;
    os << "Expiration date: " << norReader.expirationDate;
    os << "Sex: " << norReader.sex;
    os << "Number of book borrowed in a month: " << norReader.num_of_book_borrowed_in_month;
	return os;
}

int normalReader::calcFee()
{
    return num_of_book_borrowed_in_month * 5000;
}

istream& operator >> (istream& is, vipReader& vReader)
{
	reader* r = static_cast<reader*>(&vReader);
	is >> *r;
    cout << "ID: ";
    is >> vReader.id;
	cout << "Name: ";
	fflush(stdin);
	getline(is, vReader.name);
    cout << "Expiration date: ";
    is >> vReader.expirationDate;
    cout << "Sex: ";
    is >> vReader.sex;
	return is;
}

ostream& operator << (ostream &os, vipReader vReader)
{
	reader r = static_cast<reader>(vReader);
	os << r;
	os << "ID: "<< vReader.id;
	os << "Name: " << vReader.name;
    os << "Expiration date: " << vReader.expirationDate;
    os << "Sex: " << vReader.sex;
    os << "Fee: " << 50000;
	return os;
}