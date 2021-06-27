#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie(std::string name);
        void announce();
        ~Zombie();
    
    private:
        std::string name;

};

int main(void);
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
