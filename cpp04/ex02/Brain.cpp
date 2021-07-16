#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

Brain::Brain(const Brain& copy)
{
    *this = copy;
}

Brain &Brain::operator= (const Brain& s)
{
    int i;
    if (this == &s)
        return (*this);
    for (i = 0; i < 100; i++)
        this->ideas[i] = s.ideas[i];
    return (*this);
}