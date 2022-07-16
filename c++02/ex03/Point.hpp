#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {

public:
	Point(void);
	Point(const Fixed &x, const Fixed &y);
	Point(const Point &src);
	Point &operator=(const Point &src);
	~Point(void);
	const Fixed &getX(void) const;
	const Fixed &getY(void) const;

private:
	const Fixed _x;
	const Fixed _y;

};

#endif