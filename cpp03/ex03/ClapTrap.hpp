#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int energyPoint;
        int attackDamage;
        int hitpoint;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();

        ClapTrap& operator= (const ClapTrap& str);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        int getHP();
        int getAD();
        int getEP();
        void setHP(int hp);
        void setAD(int ad);
        void setEP(int ep);

};

int main(void);

#endif