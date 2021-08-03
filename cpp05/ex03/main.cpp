#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
    //try
    //{
    //    Bureaucrat Lou ("Lou");
    //    Lou.setGrade(10);
    //    std::cout << Lou << std::endl;
    //    ShrubberyCreationForm Shrubby ("home");
    //    Shrubby.beSigned(Lou);
    //    Shrubby.execute(Lou);
    //}
    //catch(std::exception & e)
    //{
    //    std::cout << e.what() << '\n';
    //} 
//////////////////////////////////////////////////
    //try
    //{
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
	try {
        Bureaucrat Po("Po");    
        Po.setGrade(1);
		Intern intern;
		Form* some_form;
		//std::cout << Po.getGrade() << std::endl;
		try {
			some_form = intern.makeForm("shrubbery creation", "Tree");
			std::cout << *some_form << std::endl;
			//Po.signForm(*some_form);
            some_form->beSigned(Po);
			some_form->execute(Po);
//
			//some_form = intern.makeForm("robotomy request", "Robo");
			//std::cout << *some_form;
			//Po.signForm(*some_form);
			//some_form->execute(Po);
			//
			//some_form = intern.makeForm("presidential pardon", "Pardone");
			//std::cout << *some_form;
			//Po.signForm(*some_form);
			//some_form->execute(Po);
			
		} catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    return (0);
}