#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"


int main()
{
    int x;

    std::cin >> x;
    Animal* meta = new Animal[x];
    const Animal* doge = new Dog;
    const Animal* cato = new Cat;
    
    meta->setCount(x);
    //meta->init(*doge, *cato);
    int i = 0;
    while (i < x)
    {
        meta[i] = new Dog;
    }
    while (i < x)
    {
       std::cout << meta[i].getType() << " " << std::endl;
       i++;
    }
    //std::cout << meta->getType() << " " << std::endl;
    //std::cout << j->getType() << " " << std::endl;
    //std::cout << i->getType() << " " << std::endl;
    //i->makeSound(); //will output the cat sound!
    //j->makeSound();
    //meta->makeSound();

    return (0);
}