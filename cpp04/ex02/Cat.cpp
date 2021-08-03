#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    this->type = "Cat";
}

Cat::~Cat()
{
    delete brain;
}

Cat::Cat(const Cat& copy)
{
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
}

Cat &Cat::operator= (const Cat& s)
{
    if (this == &s)
        return (*this);
    delete brain;
    this->brain = new Brain(*s.brain);
    this->type = s.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}