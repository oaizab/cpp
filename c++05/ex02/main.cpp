#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("b", 10);
		ShrubberyCreationForm s("s");
		b.signForm(s);
		b.executeForm(s);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b("b", 10);
		RobotomyRequestForm r("s");
		b.signForm(r);
		b.executeForm(r);
		b.executeForm(r);
		b.executeForm(r);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b("b", 10);
		PresidentialPardonForm p("p");
		b.signForm(p);
		b.executeForm(p);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat b("b", 1);
		PresidentialPardonForm p("p");
		b.signForm(p);
		b.executeForm(p);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
