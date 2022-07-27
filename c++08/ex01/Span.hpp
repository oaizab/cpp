#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

class Span
{
public:
	Span(unsigned int n);
	Span(Span const &src);
	~Span();

	Span &operator=(Span const &rhs);

	void addNumber(int n);
	int shortestSpan() const;
	int longestSpan() const;
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
private:
	Span();
	std::vector<int> _v;
	unsigned int _n;
};

#endif