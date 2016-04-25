#include <iostream>
#include "Header.h"
using namespace std;


int main(int argc, char **argv)
{
	Rectangle r1;
	Rectangle r2(20, 30);
	Rectangle r3;

	std::cin >> r1;


	cout << "r1 " << r1;
	cout << "r2 " << r2;


	std::cout << "Area of r1 is " << r1.area() << "\n";
	std::cout << "Area of r2 is " << r2.area() << "\n";

	std::cout << "Perimeter of r1 is " << r1.perimeter() << "\n";
	std::cout << "Perimeter of r2 is " << r2.perimeter() << "\n";


	std::cout << "comparing r1 and r2 \n";

	if (r1 == r2)
	{
		std::cout << "r1 is equal to r2 \n";
	}

	if (r1 < r2)
	{
		std::cout << "r1 is less than r2 \n";
	}

	if (r1 > r2)
	{
		std::cout << "r1 is greater than r2 \n";
	}

	if (r1 <= r2)
	{
		std::cout << "r1 is less than or equal to r2 \n";
	}

	if (r1 >= r2)
	{
		std::cout << "r1 is greater than  or equal to r2 \n";
	}

	if (r1 != r2)
	{
		std::cout << "r1 is not equal to r2 \n";
	}



	return 0;
}