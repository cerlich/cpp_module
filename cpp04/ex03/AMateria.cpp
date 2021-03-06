#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
}

AMateria & AMateria::operator=(const AMateria &s)
{
    if (this == &s)
        return (*this);
    this->type = s.type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}
