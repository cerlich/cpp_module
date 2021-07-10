#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    *this = copy;
}

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    hitpoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    std::cout << name << " is ready fight." << std::endl;
}

ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap destructor" << std::endl;
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