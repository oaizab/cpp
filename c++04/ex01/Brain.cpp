#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain()" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain(const Brain &src)" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "~Brain()" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}
