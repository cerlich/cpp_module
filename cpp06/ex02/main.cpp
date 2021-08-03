#include <iostream>

class Base
{
    public:
    virtual ~Base();
};

Base::~Base()
{
}

class  A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void)
{
    int i = rand() % 3;
    if (i == 0)
    {
        std::cout << "Create A" << std::endl;
        return (new A);
    }
    if (i == 1)
    {
        std::cout << "Create B" << std::endl;
        return (new B);
    }
    if (i == 2)
    {
        std::cout << "Create C" << std::endl;
        return (new C);
    }
    return (0);
}
void identify(Base* p)
{
    A *a = dynamic_cast <A *>(p);
    if (a != NULL)
        std::cout << "It's A." << std::endl;
    B *b = dynamic_cast <B *>(p);
    if (b != NULL)
        std::cout << "It's B." << std::endl;
    C *c = dynamic_cast <C *>(p);
    if (c != NULL)
        std::cout << "It's C." << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast <A &>(p);
        (void)a;
        std::cout << "It's A." << std::endl;
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        std::cout << "It's not A." << e.what() << std::endl;        
    }
    try
    {
        B &b = dynamic_cast <B &>(p);
        (void)b;
        std::cout << "It's B." << std::endl;
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        std::cout << "It's not B." << e.what() << std::endl;        
    }
    try
    {
        C &c = dynamic_cast <C &>(p);
        (void)c;    
        std::cout << "It's C." << std::endl;
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        std::cout << "It's not C." << e.what() << std::endl;        
    }    
}

int main()
{
    srand(time(NULL));
    Base *base = generate();
    identify(base);
    identify(*base);
    return (0);
    
}