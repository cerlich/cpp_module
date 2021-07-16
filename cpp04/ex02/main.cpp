#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"


int main()
{
    const AAnimal* doge = new Dog();
    const AAnimal* cato = new Cat();

    doge->makeSound(); //will output the cat sound!
    cato->makeSound();

    delete doge;
    delete cato;
    return (0);
}