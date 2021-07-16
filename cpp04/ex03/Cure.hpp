#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
	    Cure();
	    Cure(Cure const &Copy);
	    ~Cure();
	    Cure & operator= (const Cure & s);
	    AMateria*		clone() const;
	    void			use(ICharacter& target);
};

#endif