#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string const &Weapon::getType(void)
{
    return(type);
}

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{
}