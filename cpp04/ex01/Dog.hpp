#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog& copy);
        Dog& operator= (const Dog& s);

        void showBrain() const;
        virtual void makeSound() const;
};

#endif