#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();
	Fixed &operator=(Fixed const &src);
	int getRawBits() const;
	void setRawBits(int const raw);

private:
	int _rawBits;
	static const int _fractionalBits = 8;
};

#endif