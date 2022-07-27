#include "Span.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <numeric>

int randomNumber()
{
	static int i = 0;
	i += rand() % 1000 + 1;
	return i;
}

int main()
{
	srand(time(NULL));
	std::vector<int> v(100);
	Span sp = Span(100);
	std::generate(v.begin(), v.end(), randomNumber);
	sp.addNumber(v.begin(), v.end());
	// Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
