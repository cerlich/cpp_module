#include "FragTrap.hpp"

FragTrap::FragTrap(const FragTrap& copy)
{
    *this = copy;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    this->hitpoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << name << " is ready fight." << std::endl;
}

FragTrap::~FragTrap()
{
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