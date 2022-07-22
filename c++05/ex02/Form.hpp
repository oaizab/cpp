#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	Form();

public:
	Form(std::string const &name, int const gradeToSign, int const gradeToExecute);
	Form(Form const &src);
	virtual ~Form();
	Form &operator=(Form const &src);

	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &bureaucrat) const = 0;

	class GradeTooHighException;
	class GradeTooLowException;
	class FormNotSignedException;

private:
	std::string const _name;
	bool _signed;
	int const _gradeToSign;
	int const _gradeToExecute;
};

class Form::GradeTooHighException : public std::exception
{
public:
	GradeTooHighException();
	virtual ~GradeTooHighException() throw();
	virtual const char *what() const throw();
private:
	std::string _msg;
};

class Form::GradeTooLowException : public std::exception
{
public:
	GradeTooLowException();
	virtual ~GradeTooLowException() throw();
	virtual const char *what() const throw();
private:
	std::string _msg;
};

class Form::FormNotSignedException : public std::exception
{
public:
	FormNotSignedException();
	virtual ~FormNotSignedException() throw();
	virtual const char *what() const throw();
private:
	std::string _msg;
};

std::ostream &operator<<(std::ostream &o, Form const &src);

#endif