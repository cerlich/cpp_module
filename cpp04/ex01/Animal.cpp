#include "Animal.hpp"

int Animal::count;

Animal::Animal()
{
    type = "Animal";
}

Animal::~Animal()
{
}

Animal::Animal(const Animal& copy)
{
    *this = copy;
}

Animal &Animal::operator= (const Animal& s)
{
    this->type = s.type;
    return (*this);
}

Animal *Animal::init(const Animal &animal1, const Animal &animal2)
{
    Animal *new1 = new Animal[count];
    for (int i = 0; i < count; i++)
    {
        if (i < (count / 2))
            new1[i] = animal1;
        else
            new1[i] = animal2;
    }
    return(new1);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Boo!" << std::endl;
}

void Animal::setCount(int val)
{
    count = val;
}
