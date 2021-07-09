#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap Joe("Joe");
    ScavTrap Mo("Mo");
    Joe.attack("RadScorpion");
    Joe.takeDamage(9);
    Joe.beRepaired(1);

    Mo.attack("Puck");
    Mo.takeDamage(50);
    Mo.beRepaired(20);

    return (0);
}