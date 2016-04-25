#include "Header.h"
#include <cassert>
using namespace std;

Rectangle::Rectangle(int setWidth, int setHeight)
{
	width = setWidth;          // sets width of passed in rectangle
	height = setHeight;		   // sets height of passed in rectangle
}

Rectangle::~Rectangle()
{
}



int Rectangle::get_height()
{
	return height;  // return the value of the rectangle height
}


int Rectangle::get_width()
{
	return width;      // returns the width
}


void Rectangle::set_height(int iHeight)
{
	height = iHeight;  // sets the height to whatever the user selects
}

void Rectangle::set_width(int iWidth)
{
	width = iWidth;  //allows user to select width
}

int Rectangle::area()
{
	return height * width;  // returns the area
}
int Rectangle::perimeter()
{
	return 2 * (height + width);  // returns the perimeter of the rectangle
}

void Rectangle::operator = (Rectangle& r)
{
	height = r.get_height();
	width = r.get_width();
}
