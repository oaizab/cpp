#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &src);
	~Fixed();
	Fixed &operator=(const Fixed &src);
	int getRawBits() const;
	void setRawBits(const int raw);
	float toFloat() const;
	int toInt() const;

private:
	int _rawBits;
	static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &src);

#endif