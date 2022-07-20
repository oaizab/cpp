#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(AMateria const & src);
		AMateria& operator=(AMateria const & rhs);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	private:
		AMateria();

	protected:
		std::string _type;
};

#endif