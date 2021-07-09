#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
}

FragTrap::FragTrap(const FragTrap& copy)
{
    *this = copy;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    this->name = name;
    //setAD(30);
    //setHP(100);
    //setEP(100);
    hitpoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " ready to fight." << std::endl;
    //std::cout << this->attackDamage << std::endl;
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