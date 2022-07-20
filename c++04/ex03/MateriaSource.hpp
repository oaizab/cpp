#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		~MateriaSource();
		MateriaSource& operator=(MateriaSource const &rhs);

		virtual void learnMateria(AMateria* m);
		virtual AMateria* createMateria(std::string const & type);
	private:
		AMateria* _materia[4];
		int _nbMateria;
};

#endif