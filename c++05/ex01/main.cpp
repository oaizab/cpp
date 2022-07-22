#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	bob("bob", 1);
		Form		f("f", 1, 1);
		bob.signForm(f);
		std::cout << bob << std::endl;
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	bob("bob", 150);
		Form		f("f", 1, 1);
		bob.signForm(f);
		std::cout << bob << std::endl;
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
