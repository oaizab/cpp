#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include "utils.hpp"

class Contact {
	public:
		Contact(void);
		Contact(std::string, std::string, std::string,
			std::string, std::string);
		void showInfo(void) const;
		std::string shortFname(void) const;
		std::string shortLname(void) const;
		std::string shortNname(void) const;

	private:
		std::string _fname;
		std::string _lname;
		std::string _nname;
		std::string _num;
		std::string _secret;
};

#endif