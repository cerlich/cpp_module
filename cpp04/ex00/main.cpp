#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal() {type = "WrongAnimal";};
        ~WrongAnimal(){
        };
        WrongAnimal(const WrongAnimal& copy)
        {
            *this = copy;
        }
        WrongAnimal& operator= (const WrongAnimal& s)
        {
            this->type = s.type;
            return (*this);
        }
        std::string getType() const {return (type);};
        void makeSound() const
        {
            std::cout << "Qouqou!" << std::endl;
        }
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat() {type = "WrongCat";};
        ~WrongCat(){
        };
        WrongCat(const WrongCat& copy)
        {
            *this = copy;
        }
        WrongCat& operator= (const WrongCat& s)
        {
            this->type = s.type;
            return (*this);
        }
        void makeSound() const
        {
            std::cout << "Meow!" << std::endl;
        }
};


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

   //const WrongAnimal* meta1 = new WrongAnimal();    
   //const WrongAnimal* i1 = new WrongCat();
   //std::cout << meta1->getType() << " " << std::endl;
   //std::cout << i1->getType() << " " << std::endl;
   //i1->makeSound();
   //meta1->makeSound();
   //
   //delete meta1;
   //delete i1;

    delete meta;
    delete j;
    delete i;
    return (0);
}