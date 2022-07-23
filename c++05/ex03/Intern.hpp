#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const &);
	~Intern();
	Intern &operator=(Intern const &rhs);

	Form *makeForm(std::string const &form, std::string const &target);

	class UnknownFormException;
};

class Intern::UnknownFormException : public std::exception
{
public:
	UnknownFormException();
	virtual ~UnknownFormException() throw();
	virtual const char *what() const throw();
private:
	std::string _msg;
};

#endif