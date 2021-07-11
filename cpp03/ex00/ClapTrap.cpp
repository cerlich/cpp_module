#include "ClapTrap.hpp"
ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitpoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
    std::cout << this->name << " is ready to kill a monster." << std::endl;
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
    std::cout << "ClapTrap " << this->name << " tries to attack " << target <<  "." << std::endl;
    if (this->hitpoint == 0 || this->energyPoint == 0)
    {
        std::cout << "ClapTrap " << this->name << " can't attack!" << std::endl;
        if (this->energyPoint == 0)
            std::cout << "No energy points!" << std::endl;
        if (this->hitpoint == 0)
            std::cout << "Critical damage!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
            << this->attackDamage <<  " points of damage, and spends 5 Energy points. ";
    this->energyPoint -= 5;
    std::cout << this->name << "'s Energy points: " << this->energyPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name << " repaired hp with a " << amount << " hitpoints! ";
    this->hitpoint += amount;

    std::cout << this->name << "'s HP: " << this->hitpoint << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout <<  this->name << " take damage with a " << amount << " points of damage! ";
    this->hitpoint -= amount;
    if (this->hitpoint < 0)
        this->hitpoint = 0;
    std::cout << this->name << "'s HP: " << this->hitpoint << std::endl;
    if (this->hitpoint == 0)
        std::cout << this->name << " received a critical hit and can no longer attack." << std::endl;

}