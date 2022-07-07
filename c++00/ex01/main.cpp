#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "utils.hpp"

Contact create_contact()
{
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::string fname, lname, nname, num, secret;
	while (fname == "")
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, fname);
	}
	while (lname == "")
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, lname);
	}
	while (nname == "")
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nname);
	}
	while (num == "")
	{
		std::cout << "Enter number: ";
		std::getline(std::cin, num);
	}
	while (secret == "")
	{
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, secret);
	}
	return Contact(fname, lname, nname, num, secret);
}

int main()
{
	std::string cmd;
	PhoneBook phoneBook;
	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (!std::cin.good() || cmd == "EXIT")
			break;
		if (cmd == "SEARCH")
		{
			phoneBook.showList();
			int index = -1;
			std::cout << "Enter index: ";
			std::cin >> index;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			while (index < 1 || index > 8)
			{
				std::cout << "Invalid index" << std::endl;
				std::cout << "Enter index: ";
				std::cin >> index;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			if (!std::cin.good())
				break;
			phoneBook.showContact(index - 1);
		}
		if (cmd == "ADD")
		{
			phoneBook.addContact(create_contact());
			if (!std::cin.good())
				break;
		}
	}
	return 0;
}
