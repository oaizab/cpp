#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook(void) : _index(0), _count(0)
{}

void PhoneBook::addContact(Contact contact)
{
	this->_contact[(this->_index++) % 8] = contact;
	if (this->_count < 8)
		this->_count++;
}

void PhoneBook::showContact(int index) const
{
	if (index < this->_count)
		this->_contact[index].showInfo();
}

void PhoneBook::showList(void) const
{
	std::cout << std::setw(10) << "index" << "|"
		<< std::setw(10) << "fname" << "|"
		<< std::setw(10) << "lname" << "|"
		<< std::setw(10) << "nname" << std::endl;
	for (int i = 0; i < this->_count; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|"
			<< std::setw(10) << this->_contact[i].shortFname() << "|"
			<< std::setw(10) << this->_contact[i].shortLname() << "|"
			<< std::setw(10) << this->_contact[i].shortNname() << std::endl;
	}
}
