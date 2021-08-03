#include "Convert.hpp"

Convert::Convert()
{
}

Convert::Convert(const Convert & copy)
{
    this->v = copy.v;
}

Convert::~Convert()
{
}

Convert & Convert::operator=(const Convert & copy)
{
    if (this == &copy)
        return (*this);
    this->v = copy.v;
    return (*this);
}

const char * Convert::InvalidArgs::what() const throw()
{
    return ("Invalid args");
}

void Convert::tryConvert(std::string av)
{
    try
    {
        v = std::stod(av);
    }
    catch(const std::exception& e)
    {
        throw InvalidArgs();
    }
    print_all();
}

void Convert::print_all()
{
    print_char();
    print_int();
    print_float();
    print_double();
}

void Convert::print_char()
{
    std::cout << "char : ";
    if ((v >= 0 && v <= 31) || v == 127)
    {
        std::cout << "Non displayable" << std::endl;
        return ;
    }
    if (v != v || (v < 0 || v > 127))
    {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    char c  = static_cast <char> (v);
    std::cout << "\'" << c << "\'" << std::endl;
}

void Convert::print_int()
{
    std::cout << "int : ";
    if (v != v || v < INT32_MIN || v > INT32_MAX)
    {
        std::cout << "Impossible" << std::endl;
        return ;  
    }
    int i = static_cast <int> (v);
    std::cout << i << std::endl;
}

void Convert::print_float()
{
    float f2;
    std::cout << "float : ";
    float f = static_cast <float> (v);
    float f3 = modff(f, &f2);
    std::cout << f; 
    if (f3 == 0 && !std::isinf(f))
        std::cout << ".0";
    std::cout <<  "f" << std::endl;
}

void Convert::print_double()
{
    double d1;
    double d2 = modf(v, &d1);
    std::cout << "double : " << v; 
    if (d2 == 0 && !std::isinf(v))
        std::cout << ".0" << std::endl;    
    else
        std::cout << std::endl;    
}