#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Joe("Joe");

    Joe.attack("RadScorpion");
    Joe.takeDamage(9);
    Joe.beRepaired(1);

    return (0);
}