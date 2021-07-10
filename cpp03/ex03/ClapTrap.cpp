#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    energyPoint = 10;
    attackDamage = 0;
    hitpoint = 10;
    std::cout << "ClapTrap " << this->name << " is ready to kill a monster." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " drops the weapon and runs away!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = copy.name;
    this->hitpoint = copy.hitpoint;
    this->attackDamage = copy.attackDamage;
    this->energyPoint = copy.energyPoint;
}

ClapTrap &ClapTrap::operator= (const ClapTrap& s)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = s.name;
    this->hitpoint = s.hitpoint;
    this->attackDamage = s.attackDamage;
    this->energyPoint = s.energyPoint;
    return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    std::cout  << this->name << " attacks " << target << ", causing "
            << this->attackDamage <<  " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout <<  this->name << " repaired hp with a " << amount << " points!" << std::endl;
    this->hitpoint += amount;
    if (this->hitpoint > 10)
        this->hitpoint = 10;
    std::cout << "HP: " << this->hitpoint << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout <<  this->name << " take damage with a " << amount << " points!" << std::endl;
    this->hitpoint -= amount;
    if (this->hitpoint < 0)
        this->hitpoint = 0;
    std::cout << "HP: " << this->hitpoint << std::endl;
}
