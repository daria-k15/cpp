#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>{
    public:
        MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack<T> & operator=(const MutantStack &other);

        virtual ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();

};

template <class T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &other) : MutantStack<T>::stack(other){}

template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other){
    if (this != &other){
        MutantStack<T>::stack::operator=(other);
    }
    return(*this);
}

template <class T>
MutantStack<T>::~MutantStack(){}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

#endif