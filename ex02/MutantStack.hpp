#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>(){}
        ~MutantStack(){}
        MutantStack(MutantStack const& copy)
        {
            *this = copy;
        }
        MutantStack& operator=(MutantStack const& copy)
        {
            (void)copy;
            return (*this);
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {return this->c.begin();}
        iterator end() {return this->c.end();}
};

/*template <typename T, typename Container = std::list<T> >
class MutantStack : public Container
{
    public:
        MutantStack() : Container() {}
        ~MutantStack(){}
        MutantStack(MutantStack const& copy)
        {
            *this = copy;
        }
        MutantStack& operator=(MutantStack const& copy)
        {
            (void)copy;
            return (*this);
        }
        typedef typename Container::iterator iterator;
        iterator begin() {return Container::begin();}
        iterator end() {return Container::end();}
};*/

#endif
