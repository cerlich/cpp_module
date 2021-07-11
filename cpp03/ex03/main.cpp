#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
   //ClapTrap Joe("Joe");

   //Joe.attack("RadScorpion");
   //Joe.takeDamage(9);
   //Joe.beRepaired(1);

    //ScavTrap Mo("Mo");

    //Mo.attack("Mole rat");
    //Mo.takeDamage(20);
    //Mo.beRepaired(8);
    //Mo.takeDamage(30);   
    //Mo.takeDamage(80);
    //Mo.attack("Mole rat");
    //Mo.guardGate();
    //Mo.attack("Mole rat");

   //FragTrap Lou("Lou");

   //Lou.attack("Radroach");
   //Lou.attack("Radroach");
   //Lou.takeDamage(20);
   //Lou.beRepaired(8);
   //Lou.takeDamage(30);   
   //Lou.attack("Radroach");
   //Lou.highFivesGuys();
   //Lou.attack("Radroach");

    DiamondTrap Fro("Fro");

    Fro.whoAmI();
    Fro.attack("Radroach");
    Fro.takeDamage(20);
    Fro.beRepaired(8);  
    return (0);
}