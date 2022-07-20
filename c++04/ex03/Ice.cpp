#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	*this = src;
}

Ice::~Ice()
{}

Ice& Ice::operator=(Ice const & rhs)
{
	(void) rhs;
	return *this;
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}
