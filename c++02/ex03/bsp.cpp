#include "bsp.hpp"

float area(Point const a, Point const b, Point const c)
{
	float s = (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + \
		b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + \
		c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()));
	if (s < 0)
		s = -s;
	return (s / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float s = area(a, b, c);
	float s1 = area(a, b, point);
	float s2 = area(a, point, c);
	float s3 = area(b, point, c);
	if (s1 == 0 || s2 == 0 || s3 == 0)
		return (false);
	if (s1 + s2 + s3 - s > 0.01)
		return (false);
	return (true);
}
