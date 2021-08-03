#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
   try
   {
       Bureaucrat Lou ("Lou");
       Lou.setGrade(150);
       std::cout << Lou << std::endl;
       ShrubberyCreationForm Shrubby ("home");
       Shrubby.beSigned(Lou);
       Shrubby.execute(Lou);
   }
   catch(std::exception & e)
   {
       std::cout << e.what() << '\n';
   } 
//////////////////////////////////////////////////
    //try
    //{
    //    srand(time(NULL));
    //    Bureaucrat Po ("Po");    
    //    Po.setGrade(40);
    //    std::cout << Po << std::endl;
    //    RobotomyRequestForm Rob ("Roby");    
    //    Rob.beSigned(Po);
    //    Po.signForm(Rob);
    //    Rob.execute(Po);
    //}
    //catch(std::exception & e)
    //{
    //    std::cout << e.what() << '\n';
    //}

//////////////////////////////////////////////////

    //try
    //{
    //    Bureaucrat Po ("Po");    
    //    Po.setGrade(1);
    //    std::cout << Po << std::endl;
    //    PresidentialPardonForm Rob ("Roby");    
    //    Rob.beSigned(Po);
    //    Po.signForm(Rob);
    //    Rob.execute(Po);
    //}
    //catch(std::exception & e)
    //{
    //    std::cout << e.what() << '\n';
    //}
    return (0);
}