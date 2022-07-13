#ifndef HumanB_HPP
#define HumanB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string &name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon &weapon);

private:
	std::string name;
	Weapon *weapon;

};

#endif