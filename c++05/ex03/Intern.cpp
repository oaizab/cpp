#include "Intern.hpp"
#include <string>

Intern::Intern()
{}

Intern::Intern(Intern const &)
{}

Intern::~Intern()
{}

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

Form *Intern::makeForm(std::string const &form, std::string const &target)
{
	Form *newForm = nullptr;
	int i;
	std::string forms[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for (i = 0; i < 3; i++)
	{
		if (form == forms[i])
			break;
	}
	if (i == 3)
		throw Intern::UnknownFormException();
	switch (i)
	{
	case 0:
		newForm = new RobotomyRequestForm(target);
		break;
	case 1:
		newForm = new ShrubberyCreationForm(target);
		break;
	case 2:
		newForm = new PresidentialPardonForm(target);
		break;
	default:
		break;
	}
	std::cout << "Intern creates " << target << std::endl;
	return newForm;
}

Intern::UnknownFormException::UnknownFormException()
{
	_msg = "Unknown form";
}

Intern::UnknownFormException::~UnknownFormException() throw()
{}

const char *Intern::UnknownFormException::what() const throw()
{
	return _msg.c_str();
}
