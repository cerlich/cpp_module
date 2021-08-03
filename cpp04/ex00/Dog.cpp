#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog's here!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog runs away!" << std::endl; 
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
    std::cout << "Woof!" << std::endl;
}