#ifndef  FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    protected:
        static const int ep = 100;
        static const int ad = 30;
        static const int hp = 100;
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();

        FragTrap& operator= (const FragTrap& str);

        void highFivesGuys(void);
};

#endif