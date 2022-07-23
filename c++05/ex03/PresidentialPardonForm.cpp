#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string name)
	: Form(name, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
	: Form(src)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
