#include "main.hpp"
#include <cstdlib>
#include <ctime>

Base * generate(void)
{
	int n = rand() % 3;
	switch (n)
	{
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return (NULL);
}

void identify(Base * p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown" << std::endl;
}

void identify(Base & p)
{
	
	bool fail = false;
	try
	{
		fail = false;
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &)
	{
		fail = true;
	}
	if (!fail)
		return;
	try
	{
		fail = false;
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &)
	{
		fail = true;
	}
	if (!fail)
		return;
	try
	{
		fail = false;
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &)
	{
		fail = true;
	}
	if (!fail)
		return;
	std::cout << "unknown" << std::endl;
}

int main()
{
	srand(time(NULL));
	Base * p = generate();
	identify(p);
	identify(*p);
	delete p;
	return 0;
}
