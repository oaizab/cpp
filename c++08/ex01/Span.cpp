#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{}

Span::Span(Span const &src) : _v(src._v), _n(src._n)
{}

Span::~Span()
{}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_n = rhs._n;
		_v = rhs._v;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (_v.size() == _n)
		throw std::length_error("Span is full");
	_v.push_back(n);
}

int Span::shortestSpan() const
{
	if (_v.size() < 2)
		throw std::length_error("Span is too small");
	std::vector<int> v(_v);
	std::sort(v.begin(), v.end());
	int min = v[1] - v[0];
	for (unsigned int i = 2; i < v.size(); i++)
	{
		if (v[i] - v[i - 1] < min)
			min = v[i] - v[i - 1];
	}
	return min;
}

int Span::longestSpan() const
{
	if (_v.size() < 2)
		throw std::length_error("Span is too small");
	std::vector<int> v(_v);
	std::sort(v.begin(), v.end());
	return v[v.size() - 1] - v[0];
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}
