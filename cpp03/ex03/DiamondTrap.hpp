#ifndef  DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& copy);
        ~DiamondTrap();

        DiamondTrap& operator= (const DiamondTrap& str);

        void whoAmI();
        void attack(std::string const & target);
};

#endif