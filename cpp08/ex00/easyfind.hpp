#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

class NotFound : public std::exception
{
    public:
        virtual const char * what() const throw()
        {
            return ("Occurrence not found.");
        }
};

template<typename T>
void easyfind (T& list1, int n)
{
    typename T::iterator it = std::find(list1.begin(), list1.end(), n);
    if (it == list1.end())
        throw NotFound();
    else
        std::cout << *it << std::endl;
}

#endif