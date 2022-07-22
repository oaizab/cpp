#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
	: Form(name, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
	: Form(src)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	std::ofstream file;
	file.open(this->getName() + "_shrubbery");
	if (!file)
		throw std::runtime_error("Error: cannot open file");
	file << "               ,@@@@@@@,                  " << std::endl;
	file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl;
	file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o     " << std::endl;
	file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'    " << std::endl;
	file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'    " << std::endl;
	file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'     " << std::endl;
	file << "   `&%\\ ` /%&'    |.|        \\ '|8'       " << std::endl;
	file << "       |o|        | |         | |         " << std::endl;
	file << "       |.|        | |         | |         " << std::endl;
	file << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ " << std::endl;
	file.close();
}
