#include "iter.hpp"
#include <iostream>
#include <string>

void addOne(int &i)
{
	i++;
}

void upperCase(std::string &s)
{
	for (size_t i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	std::string b[] = {"a", "b", "c", "d", "e"};
	iter(a, 5, addOne);
	iter(b, 5, upperCase);
	iter(a, 5, print);
	std::cout << std::endl;
	iter(b, 5, print);
	std::cout << std::endl;
	return 0;
}
