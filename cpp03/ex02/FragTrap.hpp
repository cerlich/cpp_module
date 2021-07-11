#ifndef  FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    protected:
        FragTrap();
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        ~FragTrap();

        FragTrap& operator= (const FragTrap& str);

        void highFivesGuys(void);
        void attack(std::string const & target);
};

#endif