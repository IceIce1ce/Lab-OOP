#include"Rectangle.h"

Rectangle::Rectangle(Point tl,  Point br) 
{
	if (tl.getX() < 20 && tl.getY() < 20 && br.getX() < 20 && br.getY() < 20)
	{
		top_left = tl;
		bottom_right = br;
	}
	else 
	{
		cout << "Wrong value input" << endl;
	}
}

Point Rectangle::get_top_left() 
{
	return top_left;
}

Point Rectangle::get_bottom_right() 
{
	return bottom_right;
}