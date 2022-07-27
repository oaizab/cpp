#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <numeric>

int main()
{
	std::vector<int> v(10);
	std::iota(v.begin(), v.end(), 0);
	std::vector<int>::iterator it = easyfind(v, 5);
	while (it != v.end())
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	try
	{
		easyfind(v, 42);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
