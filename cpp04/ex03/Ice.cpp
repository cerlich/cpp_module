#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::Ice(Ice const &copy)
{
    *this = copy;
}

Ice::~Ice()
{
}

Ice & Ice::operator=(const Ice & s)
{
    if (this == &s)
        return (*this);
    this->type = s.type;
    return (*this);
}

AMateria * Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout <<  "*shoots an ice bolt at " << target.getName() << " *" << std::endl;
}