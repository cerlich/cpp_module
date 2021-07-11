#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        static const int ep = 50;
        static const int ad = 20;
        static const int hp = 100;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();

        ScavTrap& operator= (const ScavTrap& str);

        void guardGate();
        void attack(std::string const & target);
};

#endif