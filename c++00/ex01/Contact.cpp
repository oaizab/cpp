#include "Contact.hpp"
#include "utils.hpp"
#include <string>
#include <iostream>

Contact::Contact(void)
{}

Contact::Contact(std::string fname, std::string lname, std::string nname,
			std::string num, std::string secret) : _fname(fname),
			_lname(lname), _nname(nname), _num(num), _secret(secret)
{}

std::string Contact::shortFname(void) const
{
	return (getShort(this->_fname));
}

std::string Contact::shortLname(void) const
{
	return (getShort(this->_lname));
}

std::string Contact::shortNname(void) const
{
	return (getShort(this->_nname));
}

void Contact::showInfo(void) const
{
	std::cout << "first name     : " << this->_fname << std::endl;
	std::cout << "last name      : " << this->_lname << std::endl;
	std::cout << "nickname       : " << this->_nname << std::endl;
	std::cout << "phone number   : " << this->_num << std::endl;
	std::cout << "darkest secret : " << this->_secret << std::endl;
}
