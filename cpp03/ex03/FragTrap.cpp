#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
}

FragTrap::FragTrap(const FragTrap& copy)
{
    *this = copy;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hitpoint = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << name << " shouts out his battle cry!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " tripped over his leg and fell." << std::endl;
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
    std::cout << "FragTrap " <<  this->name << " asks you high five. " << this->name << " gets inspired and recovers 50 Energy points." << std::endl;
    this->energyPoint += 50;
    if (this->energyPoint > 100)
        this->energyPoint = 100;
    std::cout <<  this->name << "'s Energy points: " << this->energyPoint << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << this->name << " tries to attack " << target <<  "." << std::endl;
    if (this->hitpoint == 0 || this->energyPoint == 0)
    {
        std::cout << "FragTrap " << this->name << " can't attack!" << std::endl;
        if (this->energyPoint == 0)
            std::cout << "No energy points!" << std::endl;
        if (this->hitpoint == 0)
            std::cout << "Critical damage!" << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->name << " got his Junk Jet out of nowhere and shoots the " << target << ", causing "
            << this->attackDamage <<  " points of damage, and spends 50 Energy points. ";
    this->energyPoint -= 50;
    if (this->energyPoint < 0)
        this->energyPoint = 0;
    std::cout << this->name << "'s Energy points: " << this->energyPoint << std::endl;
}