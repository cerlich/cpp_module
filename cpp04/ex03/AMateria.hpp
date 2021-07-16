#ifndef AMATERIA_HPP
#define AMATERIA_HPP
class AMateria;
#include <iostream>
#include "ICharacter.hpp"

class AMateria 
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    virtual ~AMateria();
    AMateria(const AMateria &copy);
    AMateria & operator=(const AMateria &s);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif