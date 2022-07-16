#include <iostream>
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int number): _rawBits(number << _fractionalBits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float number)
{
	float tmp = number * (1 << _fractionalBits);
	_rawBits = static_cast<int>(tmp);
	tmp -= _rawBits;
	if (tmp >= 0.5)
		_rawBits++;
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called\n";
	this->_rawBits = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (this->_rawBits);
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
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
