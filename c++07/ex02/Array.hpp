#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
public:
	Array(void);
	Array(unsigned int n);
	Array(Array const &src);
	~Array(void);
	Array &operator=(Array const &rhs);

	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;
	unsigned int size(void) const;

private:
	T *_array;
	unsigned int _size;
};

#include "Array.tpp"

#endif