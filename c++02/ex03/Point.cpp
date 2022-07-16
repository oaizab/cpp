#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y)
{}

Point::Point(const Point &src): _x(src.getX()), _y(src.getY())
{}

Point &Point::operator=(const Point &src)
{
	(void) src;
	return (*this);
}

Point::~Point()
{}

const Fixed &Point::getX(void) const
{
	return (this->_x);
}

const Fixed &Point::getY(void) const
{
	return (this->_y);
}
