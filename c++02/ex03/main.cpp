#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"

int main( void )
{
	Point a(Fixed(1.11f), Fixed(1.59f));
	Point b(Fixed(8.43f), Fixed(3.39f));
	Point c(Fixed(6.33f), Fixed(0.32f));
	Point point(Fixed(2.3f), Fixed(1.58f));
	if (bsp(a, b, c, point))
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	return 0;
}