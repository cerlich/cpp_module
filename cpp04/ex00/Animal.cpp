#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal crated" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructed" << std::endl;   
}

Animal::Animal(const Animal& copy)
{
    *this = copy;
}

Animal &Animal::operator= (const Animal& s)
{
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
