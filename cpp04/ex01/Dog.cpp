#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog's here!" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog runs away!" << std::endl;    
}

Dog::Dog(const Dog& copy)
{
    this->brain = new Brain(*copy.brain);
    *this = copy;
}

Dog &Dog::operator= (const Dog& s)
{
    if (this == &s)
        return (*this);
    delete brain;
    this->brain = new Brain(*s.brain);
    this->type = s.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

void Dog::showBrain() const
{
    std::cout << brain->getIdea() << std::endl;
}