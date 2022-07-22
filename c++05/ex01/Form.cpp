#include "Form.hpp"

Form::Form()
	: _name(""), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{}

Form::Form(std::string const &name, int const gradeToSign, int const gradeToExecute)
	: _name(name), _signed(false), _gradeToSign(gradeToSign),
		_gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1)
		throw Form::GradeTooLowException();
	if (gradeToExecute < 1)
		throw Form::GradeTooLowException();
	if (gradeToSign > 150)
		throw Form::GradeTooHighException();
	if (gradeToExecute > 150)
		throw Form::GradeTooHighException();
	return ;
}

Form::Form(Form const &src)
	: _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign),
		_gradeToExecute(src._gradeToExecute)
{
	return ;
}

Form::~Form()
{}

Form &Form::operator=(Form const &src)
{
	if (this != &src)
	{
		this->_signed = src._signed;
	}
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
	return ;
}

Form::GradeTooHighException::GradeTooHighException()
	: _msg("Grade too high")
{}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

const char *Form::GradeTooHighException::what() const throw()
{
	return (this->_msg.c_str());
}

Form::GradeTooLowException::GradeTooLowException()
	: _msg("Grade too low")
{}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

const char *Form::GradeTooLowException::what() const throw()
{
	return (this->_msg.c_str());
}

std::ostream &operator<<(std::ostream &o, Form const &src)
{
	o << "Form " << src.getName() << " is ";
	if (src.getSigned())
		o << "signed";
	else
		o << "not signed";
	o << " and has a grade to sign of " << src.getGradeToSign()
		<< " and a grade to execute of " << src.getGradeToExecute();
	return (o);
}
