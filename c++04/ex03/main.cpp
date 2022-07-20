#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* zaz = new Character("zaz");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);

	ICharacter* bob = new Character("bob");

	zaz->use(0, *bob);
	zaz->use(1, *bob);

	std::cout << std::string(20, '-') << std::endl;

	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = zaz->getMateria(1);
	zaz->unequip(1);
	zaz->use(1, *bob);
	zaz->use(2, *bob);

	delete bob;
	delete zaz;
	delete src;
	return 0;
}
