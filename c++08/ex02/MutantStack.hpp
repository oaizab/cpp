#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	class iterator
	{
		public:
			iterator();
			iterator(T *ptr);
			iterator(iterator const &src);
			~iterator();
			iterator &operator=(iterator const &rhs);
			bool operator==(iterator const &rhs);
			bool operator!=(iterator const &rhs);
			iterator &operator++();
			iterator operator++(int);
			iterator &operator--();
			iterator operator--(int);
			T &operator*();
			T *operator->();
		private:
			T *_ptr;
	};
	public:
		MutantStack();
		MutantStack(MutantStack const &src);
		~MutantStack();
		MutantStack &operator=(MutantStack const &rhs);
		iterator begin();
		iterator end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>(src)
{}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &rhs)
{
	if (this != &rhs)
		std::stack<T>::operator=(rhs);
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (iterator(&this->top() - this->size() + 1));
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (iterator(&this->top() + 1));
}

template <typename T>
MutantStack<T>::iterator::iterator() : _ptr(NULL)
{}

template <typename T>
MutantStack<T>::iterator::iterator(T *ptr) : _ptr(ptr)
{}

template <typename T>
MutantStack<T>::iterator::iterator(iterator const &src) : _ptr(src._ptr)
{}

template <typename T>
MutantStack<T>::iterator::~iterator()
{}

template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator=(iterator const &rhs)
{
	if (this != &rhs)
		_ptr = rhs._ptr;
	return (*this);
}

template <typename T>
bool MutantStack<T>::iterator::operator==(iterator const &rhs)
{
	return (_ptr == rhs._ptr);
}

template <typename T>
bool MutantStack<T>::iterator::operator!=(iterator const &rhs)
{
	return (_ptr != rhs._ptr);
}

template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator++()
{
	_ptr++;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator++(int)
{
	iterator tmp(*this);
	operator++();
	return (tmp);
}

template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator--()
{
	_ptr--;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator--(int)
{
	iterator tmp(*this);
	operator--();
	return (tmp);
}

template <typename T>
T &MutantStack<T>::iterator::operator*()
{
	return (*_ptr);
}

template <typename T>
T *MutantStack<T>::iterator::operator->()
{
	return (_ptr);
}

#endif