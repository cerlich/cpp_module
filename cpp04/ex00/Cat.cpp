#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
}

Cat::~Cat()
{
}

Cat::Cat(const Cat& copy)
{
    *this = copy;
}

Cat &Cat::operator= (const Cat& s)
{
    this->type = s.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}