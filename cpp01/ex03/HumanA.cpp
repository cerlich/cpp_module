#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->human = name;
    std::cout << name << " takes the weapon" << std::endl;
}

void HumanA::attack()
{
    std::cout << human << " attacks with his"  << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << human << " died" << std::endl;
}