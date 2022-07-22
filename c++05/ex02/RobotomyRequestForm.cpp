#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("RobotomyRequestForm", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string name)
	: Form(name, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
	: Form(src)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	static bool _execute = false;
	if (this->getSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	_execute = !_execute;
	std::cout << "Bzzz bzzz bzzz..." << std::endl;
	if (_execute)
		std::cout << this->getName() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "robotomy failed." << std::endl;
}
