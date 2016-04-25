#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
public:
	// constructor
	Rectangle(int initialWidth = 1, int initialHeight = 1);
	~Rectangle();

	int get_height();  //funtion prototype
	int get_width();	// funcion prototype
	void set_height(int iHeight);	//function prototype
	void set_width(int iWidth);	// function prototype
	int area();		// function prototype
	int perimeter();	//function prototype
	void operator = (Rectangle& r);		// function prototype

	friend bool operator == (Rectangle& r1, Rectangle& r2)
	{
		if ((r1.get_height() == r2.get_height()) && (r1.get_width() == r2.get_width()))
		{
			return true;
		}

		return false;
	}

	friend bool operator != (Rectangle& r1, Rectangle& r2)
	{
		if (r1 == r2)
		{
			return false;
		}

		return true;
	}


	/*returns true if the left hand side is smaller than the right hand side.  This operation should be done with the area of the rectangles*/
	friend bool operator < (Rectangle r1, Rectangle r2)
	{
		if (r1.area() < r2.area())
		{
			return true;
		}

		return false;
	}

	friend bool operator <= (Rectangle r1, Rectangle r2)
	{
		if ((r1 < r2) || (r1 == r2))
		{
			return true;
		}

		return false;
	}

	friend bool operator >(Rectangle r1, Rectangle r2)
	{
		// if r1 is neither less than r2 nor r1 is equal to r2 then r1 must be greater than r2.
		if ((!(r1 < r2)) && (r1 != r2))
		{
			return true;
		}

		return false;
	}

	friend bool operator >= (Rectangle r1, Rectangle r2)
	{
		if ((r1 > r2) || (r1 == r2))
		{
			return true;
		}

		return false;
	}

	friend ostream& operator << (ostream &out, Rectangle c)
	{
		out << "Length = " << c.get_height() << ", Width =  " << c.get_width() << "\n";

		return out;
	}

	friend istream& operator >> (istream& in, Rectangle& c)
	{
		// code for reading in data values goes here
		int h, w;
		cout << "Enter Height of rectangle \n";
		in >> h;
		cout << "Enter Width of rectangle \n";
		in >> w;

		if (in.fail())  // stream failed or eof
		{
			return in;
		}

		// code for checking class invariant goes here
		if (((h <= 0) && (w <= 0)) && ((h < 100) && (w < 100)))
		{
			in.setstate(ios_base::failbit);
			return in;
		}

		// code for setting data members goes here
		c.set_height(h);
		c.set_width(w);

		return in;
	}




private:
	int height;
	int width;
};

#endif // RECTANGLE_H