#include "Brain.hpp"

Brain::Brain()
{
    ideas[0] = "pshhhh";
}

Brain::~Brain()
{
}

Brain::Brain(const Brain& copy)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
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

std::string Brain::getIdea() const
{
    return(ideas[0]);
}
