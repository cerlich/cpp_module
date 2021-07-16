#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        arr[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
    clear_arr();
}

MateriaSource::MateriaSource(const MateriaSource & copy)
{
    clear_arr();
    for(int i = 0; i < 4; i++)
        this->arr[i] = copy.arr[i]->clone();
}

MateriaSource & MateriaSource::operator=(const MateriaSource &s)
{
    if (this == &s)
        return (*this);
    clear_arr();
    for(int i = 0; i < 4; i++)
        this->arr[i] = s.arr[i]->clone();
    return (*this); 
}

void MateriaSource::learnMateria(AMateria* s)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->arr[i] == nullptr)
        {
            arr[i] = s->clone();
            return ;
        }
    }
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->arr[i])
        {
            if (type == arr[i]->getType())
                return(arr[i]->clone());
        }
    }
    return (0);
}

void MateriaSource::clear_arr()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->arr[i])
        {
            delete arr[i];
            arr[i] = nullptr;
        }
    }    
}