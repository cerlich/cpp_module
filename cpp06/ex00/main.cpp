#include "Convert.hpp"

int main(int ac, char *av[])
{
    (void)ac;
    Convert convert;
    if (ac == 2)
    {
        try
        {
            convert.tryConvert(av[1]);
        }
        catch(const std::exception& e)
        {
            std::cout << "char : Impossible" << std::endl;
            std::cout << "int : Impossible" << std::endl;
            std::cout << "float : Impossible" << std::endl;
            std::cout << "double : Impossible" << std::endl;
        }
    }
    else
        std::cout << "Too many args" << std::endl;
    return 0;
}