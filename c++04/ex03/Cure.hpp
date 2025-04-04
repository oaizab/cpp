#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &src);
		virtual ~Cure();
		Cure& operator=(Cure const &rhs);

		virtual Cure* clone() const;
};

#endif