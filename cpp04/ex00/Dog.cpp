#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
}

Dog::~Dog()
{
}

Dog::Dog(const Dog& copy)
{
    *this = copy;
}

Dog &Dog::operator= (const Dog& s)
{
    this->type = s.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woow!" << std::endl;
}