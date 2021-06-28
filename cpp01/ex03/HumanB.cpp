#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->human = name;
    std::cout << name << " takes the weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << human << " attacks with his"  << weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
    std::cout << human << " died" << std::endl;
}