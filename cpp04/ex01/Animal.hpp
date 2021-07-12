#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
        static int count;
    public:
        Animal();
        ~Animal();
        Animal(const Animal& copy);
        Animal *init(const Animal &animal1, const Animal &animal2);
        Animal& operator= (const Animal& s);
        std::string getType() const;
        virtual void makeSound() const;
        static void setCount(int val);
};

int main();

#endif