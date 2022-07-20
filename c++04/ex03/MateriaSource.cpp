#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	_nbMateria = 0;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _nbMateria; i++)
		delete _materia[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < _nbMateria; i++)
			delete _materia[i];
		_nbMateria = rhs._nbMateria;
		for (int i = 0; i < _nbMateria; i++)
			_materia[i] = rhs._materia[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (_nbMateria < 4)
	{
		_materia[_nbMateria] = m;
		_nbMateria++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return new Ice;
	if (type == "cure")
		return new Cure;
	return NULL;
}
