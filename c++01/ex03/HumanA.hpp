#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(const std::string &name, Weapon &weapon);
	~HumanA();

	void attack(void);

private:
	std::string name;
	Weapon &weapon;

};

#endif