#include"Rectangle.h"

Rectangle::Rectangle(Point tl, Point tr, Point bl, Point br)
{
	if (tl.getX() < 20 && tl.getY() < 20 && tr.getX() < 20 && tr.getY() < 20 && bl.getX() < 20 && bl.getY() < 20 && br.getX() < 20 && br.getY() < 20)
	{
		top_left = tl;
		top_right = tr;
		bottom_left = bl;
		bottom_right = br;
	}
	else
	{
		cout << "Wrong value input" << endl;
	}
	if (tl.getX() != bl.getX())
	{
		cout << "Error: top left and bottom left must have same value !" << endl;
	}
	if (tr.getX() != br.getX())
	{
		cout << "Error: top right and bottom right must have same value !" << endl;
	}
}

Point Rectangle::get_top_left()
{
	return top_left;
}

Point Rectangle::get_top_right()
{
	return top_right;
}

Point Rectangle::get_bottom_left()
{
	return bottom_left;
}

Point Rectangle::get_bottom_right()
{
	return bottom_right;
}

double Rectangle::getWidth() 
{
	Point p1 = this->get_top_left();
	Point p2 = this->get_top_right();
	return p2.getX() - p1.getX();
}

double Rectangle::getHeight() 
{
	Point p3 = this->get_top_right();
	Point p4 = this->get_bottom_right();
	return p3.getY() - p4.getY();
}

double Rectangle::calcPerimeter() 
{
	double per = this->getHeight() * 2 + this->getWidth() * 2;
	return per;
}

double Rectangle::calcArea() 
{
	double area = this->getHeight() * 2 * this->getWidth() * 2;
	return area;
}

Rectangle::~Rectangle()
{
}