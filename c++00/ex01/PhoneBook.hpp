#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook {
	public:
		PhoneBook(void);
		void showList(void) const;
		void addContact(Contact);
		void showContact(int index) const;

	private:
		Contact _contact[8];
		int _index;
		int _count;
};

#endif