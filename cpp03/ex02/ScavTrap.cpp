#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    *this = copy;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hitpoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << name << " arms with a Plasma Rifle." << std::endl;
}

ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap " << name << " remembers that he forgot to feed his hamster!" << std::endl;
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
    if (this->energyPoint < 25)
    {
        std::cout << "Too few Energy points to enter in Gate keeper mode, need more than 25." << std::endl;
        return ;
    }
    this->energyPoint = 0;
    this->hitpoint += 50;
    if (this->hitpoint > 100)
        this->hitpoint = 100;
    std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode." << std::endl
        << "All energy points are consumed and 50 hitpoint are restored. "
        <<  this->name << "'s Energy points: " << this->energyPoint << ", " << "HP: " << this->hitpoint << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->name << " tries to attack " << target <<  "." << std::endl;
    if (this->hitpoint == 0 || this->energyPoint == 0)
    {
        std::cout << "ScavTrap " << this->name << " can't attack!" << std::endl;
        if (this->energyPoint == 0)
            std::cout << "No energy points!" << std::endl;
        if (this->hitpoint == 0)
            std::cout << "Critical damage!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " shoots the " << target << ", causing "
            << this->attackDamage <<  " points of damage, and spends 10 Energy points. ";
    this->energyPoint -= 10;
    if (this->energyPoint < 0)
        this->energyPoint = 0;    
    std::cout << this->name << "'s Energy points: " << this->energyPoint << std::endl;
}