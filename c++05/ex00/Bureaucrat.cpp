#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: _name(""), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
	: _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
	: _name(src._name), _grade(src._grade)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
	{
		this->_grade = src._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
	: _msg("Grade too high")
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (this->_msg.c_str());
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
	: _msg("Grade too low")
{}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (this->_msg.c_str());
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src)
{
	o << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (o);
}
