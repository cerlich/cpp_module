#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inv[4];
        int count;
    public:
        Character();
        Character(std::string name);
        Character(const Character &copy);
        ~Character();
        Character & operator= (const Character &s);

        virtual std::string const & getName() const;
        void clear_inv();
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif