#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	*this = src;
}

Cure::~Cure()
{}

Cure& Cure::operator=(Cure const &rhs)
{
	(void) rhs;
	return *this;
}

Cure* Cure::clone() const
{
	return new Cure(*this);
}
