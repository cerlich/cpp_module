#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat's here!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat runs away!" << std::endl;    
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