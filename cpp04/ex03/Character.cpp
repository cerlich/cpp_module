#include "Character.hpp"

Character::Character()
{
    this->count = 0;
    for (int i = 0; i < 4; i++)
        this->inv[i] = nullptr;
}

Character::Character(std::string name)
{
    this->name = name;
    this->count = 0;
    for (int i = 0; i < 4; i++)
        this->inv[i] = nullptr;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (inv[i])
        {
            delete inv[i];
            inv[i] = nullptr;
        }
    }
}

Character::Character(const Character &copy)
{
    this->name = copy.name;
    this->count = copy.count;
    clear_inv();
    for (int i = 0; i < 4; i++)
    {
        if (this->inv[i] == nullptr)
            this->inv[i] = copy.inv[i]->clone();
    }
}

Character & Character::operator= (const Character &s)
{
    if (this == &s)
        return (*this);
    clear_inv();
    for (int i = 0; i < 4; i++)
    {
        if (this->inv[i] == nullptr)
            this->inv[i] = s.inv[i]->clone();
    }    
    this->name = s.name;
    this->count = s.count;
    return (*this);
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    if (this->count < 4)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->inv[i] == nullptr)
            {
                this->inv[i] = m;
                this->count++;
                return ;
            }
        }
    }
}

void Character::unequip(int idx)
{
    if (this->inv[idx])
    {
        delete this->inv[idx];
        this->inv[idx] = nullptr;
        this->count--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (inv[idx])
        inv[idx]->use(target);
}

void Character::clear_inv()
{
    for (int i = 0; i < this->count; i++)
    {
        if (inv[i])
        {
            delete inv[i];
            inv[i] = nullptr;
        }
    }
}