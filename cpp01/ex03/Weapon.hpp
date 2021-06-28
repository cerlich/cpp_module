#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    public:
        Weapon(std::string type);
        std::string const &getType();
        ~Weapon();
        void setType(std::string type);
    private:
        std::string type;
        
};

#endif