#include "Zombie.hpp"

int main(void)
{
    Zombie* qou =  newZombie("Qou");
    Zombie wou = Zombie("Wou");
    Zombie* zou = new Zombie("Zou");
    randomChump("Pou");
    delete qou;
    delete zou;
    return (0);
}