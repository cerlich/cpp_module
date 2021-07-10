#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(const FragTrap& copy)
{
    *this = copy;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    hitpoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " ready to fight." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap& s)
{
    this->name = s.name;
    this->hitpoint = s.hitpoint;
    this->energyPoint = s.energyPoint;
    this->attackDamage = s.attackDamage;
    return (*this); 
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " <<  name << " asks you high five." << std::endl;
}