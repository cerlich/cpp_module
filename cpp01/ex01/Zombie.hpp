#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie();
        void announce();
        void getName(std::string name);
        ~Zombie();
    
    private:
        std::string name;

};

int main(void);
Zombie* zombieHorde( int N, std::string name );

#endif
