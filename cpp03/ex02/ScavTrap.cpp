#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    *this = copy;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitpoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
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