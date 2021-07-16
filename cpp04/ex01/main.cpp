#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"


int main()
{
    int x = 4;
    //const Animal* doge = new Dog;
    //const Animal* cato = new Cat;
    Animal *meta[x];
    int i;

    for (i = 0; i < x / 2; i++)
        meta[i] = new Dog;   
    for (i = x / 2 ; i < x ; i++)
        meta[i] = new Cat;
    for (i = 0 ; i < x ; i++) {
       std::cout << meta[i]->getType() << " " << std::endl;
       meta[i]->makeSound();
    }
    for (i = 0; i < x; i++)
        delete meta[i];
    return (0);
}