#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    hitpoint = FragTrap::hp;
    attackDamage = FragTrap::ad;
    energyPoint = ScavTrap::ep;
    std::cout << "DiamondTrap " << name << " constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ScavTrap(copy), FragTrap(copy)
{
    *this = copy;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap& s)
{
     this->name = s.name;
    this->hitpoint = s.hitpoint;
    this->energyPoint = s.energyPoint;
    this->attackDamage = s.attackDamage;   
    return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->name << " or " << ClapTrap::name + "_clap_name"<< std::endl;
    std::cout << "AD: "<< this->attackDamage << " HP: " << this->hitpoint << " EP: " << this->energyPoint << std::endl;    
}