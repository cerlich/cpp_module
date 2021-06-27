#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    announce();
}
Zombie::~Zombie()
{
    std::cout << name << " died" << std::endl;
}