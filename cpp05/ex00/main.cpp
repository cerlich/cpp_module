#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat Lou ("Lou");

//////////////////////////////////////////////
    Lou.setGrade(1);
    std::cout << Lou << std::endl;    
    try
    {
        Lou.incGrade();    
        //Lou.decGrade();
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << Lou << std::endl;
//////////////////////////////////////////////
    Lou.setGrade(150);
    std::cout << Lou << std::endl;
    try
    {
        //Lou.incGrade();
        Lou.decGrade();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << Lou << std::endl;
//////////////////////////////////////////////
    Lou.setGrade(50);
    std::cout << Lou << std::endl;
    try
    {
        Lou.incGrade();
        //Lou.decGrade();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << Lou << std::endl; 
    return (0);
}