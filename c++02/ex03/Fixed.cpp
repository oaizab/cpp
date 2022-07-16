#include <iostream>
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _rawBits(0)
{}

Fixed::Fixed(const int number): _rawBits(number << _fractionalBits)
{}

Fixed::Fixed(const float number)
{
	float tmp = number * (1 << _fractionalBits);
	_rawBits = static_cast<int>(tmp);
	tmp -= _rawBits;
	if (tmp >= 0.5)
		_rawBits++;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::~Fixed()
{}

Fixed &Fixed::operator=(const Fixed &src)
{
	this->_rawBits = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	return (this->_rawBits);
}

void Fixed::setRawBits(const int raw)
{
	this->_rawBits = raw;
}

float Fixed::toFloat() const
{
	return (static_cast<float>(this->_rawBits) / (1 << _fractionalBits));
}

int Fixed::toInt() const
{
	return (this->_rawBits >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &src)
{
	os << src.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed &src) const
{
	return (this->_rawBits > src.getRawBits());
}

bool Fixed::operator<(const Fixed &src) const
{
	return (this->_rawBits < src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src) const
{
	return (this->_rawBits >= src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src) const
{
	return (this->_rawBits <= src.getRawBits());
}

bool Fixed::operator==(const Fixed &src) const
{
	return (this->_rawBits == src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src) const
{
	return (this->_rawBits != src.getRawBits());
}

// Fixed &Fixed::operator+(Fixed &src)
// {
// 	this->_rawBits += src.getRawBits();
// 	return (*this);
// }

// Fixed &Fixed::operator-(Fixed &src)
// {
// 	this->_rawBits -= src.getRawBits();
// 	return (*this);
// }

// Fixed &Fixed::operator*(Fixed &src)
// {
// 	this->_rawBits *= src.getRawBits();
// 	return (*this);
// }

// Fixed &Fixed::operator/(Fixed &src)
// {
// 	this->_rawBits /= src.getRawBits();
// 	return (*this);
// }

Fixed Fixed::operator+(Fixed src) const
{
	Fixed tmp(this->toFloat() + src.toFloat());
	return (tmp);
}

Fixed Fixed::operator-(Fixed src) const
{
	Fixed tmp(this->toFloat() - src.toFloat());
	return (tmp);
}

Fixed Fixed::operator*(Fixed src) const
{
	Fixed tmp(this->toFloat() * src.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(Fixed src) const
{
	Fixed tmp(this->toFloat() / src.toFloat());
	return (tmp);
}

Fixed &Fixed::operator++()
{
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_rawBits++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_rawBits--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
