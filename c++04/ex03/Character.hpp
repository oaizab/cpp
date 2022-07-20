#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string const & name);
		Character(Character const &src);
		virtual ~Character();
		Character& operator=(Character const &rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		virtual AMateria* getMateria(int idx) const;

	private:
		std::string _name;
		AMateria* _inventory[4];
};

#endif