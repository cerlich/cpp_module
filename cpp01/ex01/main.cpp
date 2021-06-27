#include "Zombie.hpp"

int main(void)
{
    Zombie* horde =  zombieHorde(5, "Lou");
    delete [] horde;
    return (0);
}