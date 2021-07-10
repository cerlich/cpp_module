#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    protected:
        ScavTrap();
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();

        ScavTrap& operator= (const ScavTrap& str);

        void guardGate();
        void attack(std::string const & target);
};

#endif