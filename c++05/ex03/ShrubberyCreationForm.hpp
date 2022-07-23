#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

	void execute(Bureaucrat const &executor) const;
};

#endif