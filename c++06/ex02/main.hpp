#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base
{
public:
	virtual ~A() {};
};

class B : public Base
{
public:
	virtual ~B() {};
};

class C : public Base
{
public:
	virtual ~C() {};
};

#endif