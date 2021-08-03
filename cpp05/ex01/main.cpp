#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
    try
    {
        Bureaucrat Lou ("Lou");
        Form Peper ("Peper", 10, 50);
        Lou.setGrade(10);
        std::cout << Lou << std::endl;
        std::cout << Peper << std::endl;
        Peper.beSigned(Lou);
        Lou.signForm(Peper);
        std::cout << Peper << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << '\n';
    } 
////////////////////////////////////////////////
    try
    {
        Bureaucrat Po ("Po");
        Form Pog ("Pog", 10, 15);       
        Po.setGrade(150);
        std::cout << Po << std::endl;
        std::cout << Pog << std::endl;      
        Pog.beSigned(Po);
        Po.signForm(Pog);
        std::cout << Pog << std::endl; 
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << '\n';
    }
////////////////////////////////////////////////
    return (0);
}