#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
}

AAnimal::~AAnimal()
{
}

AAnimal::AAnimal(const AAnimal& copy)
{
    *this = copy;
}

AAnimal &AAnimal::operator= (const AAnimal& s)
{
    if (this == &s)
        return (*this);
    this->type = s.type;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::makeSound() const
{
    std::cout << "Boo!" << std::endl;
}
