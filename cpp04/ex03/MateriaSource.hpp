#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *arr[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource & copy);
        MateriaSource & operator=(const MateriaSource &s);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        void clear_arr();
};  

#endif