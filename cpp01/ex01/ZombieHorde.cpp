#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie* horde = new Zombie[N];
    while(i < N)
    {
        horde[i].getName(name);
        i++;
    }
    return (horde);
}