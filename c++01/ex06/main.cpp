#include "Harl.hpp"
#include <iostream>

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Usage: ./main.exe <level>" << std::endl;
		return (0);
	}
	Harl harl;
	int i;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0; i < 4; i++)
	{
		if (av[1] == levels[i])
			break;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain(levels[0]);
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain(levels[1]);
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain(levels[2]);
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain(levels[3]);
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" \
				<< std::endl;
	}
	return (0);
}