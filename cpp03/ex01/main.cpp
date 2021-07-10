#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
   //ClapTrap Joe("Joe");

   //Joe.attack("RadScorpion");
   //Joe.takeDamage(9);
   //Joe.beRepaired(1);

    ScavTrap Mo("Mo");

    Mo.attack("Mole rat");
    Mo.takeDamage(20);
    Mo.beRepaired(8);
    Mo.takeDamage(30);   
    Mo.takeDamage(80);
    Mo.attack("Mole rat");
    Mo.guardGate();
    return (0);
}