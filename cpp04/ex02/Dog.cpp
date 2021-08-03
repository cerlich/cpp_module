#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    this->type = "Dog";
}

Dog::~Dog()
{
    delete brain;
}

Dog::Dog(const Dog& copy)
{
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
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