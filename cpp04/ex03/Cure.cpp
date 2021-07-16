#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::Cure(Cure const &copy)
{
    *this = copy;
}

Cure::~Cure()
{
}

Cure & Cure::operator=(const Cure & s)
{
    if (this == &s)
        return (*this);
    this->type = s.type;
    return (*this);
}

AMateria * Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}