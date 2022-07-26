#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T const *t, int size, void (*f)(T const &))
{
	for (int i = 0; i < size; i++)
		f(t[i]);
}

template <typename T>
void iter(T *t, int size, void (*f)(T &))
{
	for (int i = 0; i < size; i++)
		f(t[i]);
}

template <typename T>
void print(T &t)
{
	std::cout << t << " ";
}

#endif