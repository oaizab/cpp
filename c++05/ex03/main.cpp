#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern intern;
		Form *rrf;

		rrf = intern.makeForm("robotomy request", "Bender");
		Bureaucrat b("Bender", 1);
		b.signForm(*rrf);
		b.executeForm(*rrf);
		b.executeForm(*rrf);
		b.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Intern intern;
		Form *scf;

		scf = intern.makeForm("shrubbery creation", "Bender");
		Bureaucrat b("Bender", 1);
		b.signForm(*scf);
		b.executeForm(*scf);
		delete scf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Intern intern;
		Form *ppf;

		ppf = intern.makeForm("presidential pardon", "Bender");
		Bureaucrat b("Bender", 1);
		b.signForm(*ppf);
		b.executeForm(*ppf);
		delete ppf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Intern intern;
		Form *ppf;

		ppf = intern.makeForm("noForm", "Bender");
		Bureaucrat b("Bender", 1);
		b.signForm(*ppf);
		b.executeForm(*ppf);
		delete ppf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
