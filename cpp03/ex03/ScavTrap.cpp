#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    *this = copy;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    this->name = name;
    //setHP(100);
    //setEP(50);
    //setAD(20);
    hitpoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout << name << " is ready fight." << std::endl;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap &ScavTrap::operator= (const ScavTrap& s)
{
    this->name = s.name;
    this->hitpoint = s.hitpoint;
    this->energyPoint = s.energyPoint;
    this->attackDamage = s.attackDamage;
    return (*this); 
}

void ScavTrap::guardGate()
{
    std::cout << name << " have enterred in Gate keeper mode." << std::endl;
}