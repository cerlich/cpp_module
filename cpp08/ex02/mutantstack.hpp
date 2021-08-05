

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <string>
#include <iostream>
#include <stack>
#include <algorithm>
#include <deque>

template <typename T>
class MutantStack: public std::stack<T>
{

	public:
		MutantStack() {};
		virtual ~MutantStack() {};
		MutantStack(const MutantStack& copy) : std::stack<T>(copy){
	//		std::stack<T>::operator=(copy);
		};
		MutantStack &operator=(const MutantStack &copy) {
            if (this == &copy)
                return (*this);
            std::stack<T>::operator=(copy);  //this->c = copy.c
            return (*this);
        }

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() { 
			return (std::stack<T>::c.begin()); 
		}
		iterator end() {
			return (std::stack<T>::c.end()); 
		}

		typedef typename std::stack<T>::container_type::const_iterator citerator;
		citerator begin() const { 
			return (std::stack<T>::c.begin());
		}
		citerator end() const { 
			return (std::stack<T>::c.end()); 
		}

		typedef typename std::stack<T>::container_type::reverse_iterator riterator;
		riterator rbegin() { 
			return (std::stack<T>::c.begin());
		}
		riterator rend() { 
			return (std::stack<T>::c.end()); 
		}
};

#endif
