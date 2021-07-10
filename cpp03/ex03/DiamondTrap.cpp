#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    this->name = name;
    hitpoint = FragTrap::hp;
    attackDamage = FragTrap::ad;
    energyPoint = ScavTrap::ep;
    std::cout << "DiamondTrap " << name << " ready to fight" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ScavTrap(copy), FragTrap(copy)
{
    *this = copy;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap& s)
{
     this->name = s.name;
    this->hitpoint = s.hitpoint;
    this->energyPoint = s.energyPoint;
    this->attackDamage = s.attackDamage;   
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << this->attackDamage << std::endl
        << this->hitpoint << std::endl
        << this->energyPoint << std::endl;
        //<< this->attackDamage << std::endl;
       // << FragTrap::attackDamage << std::endl
        //<< ScavTrap::attackDamage << std::endl
        //<< ScavTrap::energyPoint << std::endl
        //<< FragTrap::energyPoint << std::endl;
} 