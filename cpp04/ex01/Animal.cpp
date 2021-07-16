#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
}

Animal::~Animal()
{
}

Animal::Animal(const Animal& copy)
{
    *this = copy;
}

Animal &Animal::operator= (const Animal& s)
{
    if (this == &s)
        return (*this);
    this->type = s.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Boo!" << std::endl;
}
