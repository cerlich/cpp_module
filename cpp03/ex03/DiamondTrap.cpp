#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
}

DiamondTrap::DiamondTrap(std::string name) :ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->name = name;

    //this->hitpoint = FragTrap::getHP();
    //this->attackDamage = FragTrap::getAD();
    //this->energyPoint =ScavTrap::getEP();
    hitpoint = FragTrap::hitpoint;
    attackDamage = FragTrap::attackDamage;
    energyPoint = ScavTrap::energyPoint;
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
        << FragTrap::attackDamage << std::endl
        << ScavTrap::attackDamage << std::endl
        << ScavTrap::energyPoint << std::endl
        << FragTrap::energyPoint << std::endl;
} 