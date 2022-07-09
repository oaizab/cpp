#ifndef Zombie_HPP
#define Zombie_HPP

#include <iostream>

class Zombie {

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);

private:
	std::string name;

};

#endif