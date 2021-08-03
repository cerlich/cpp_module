#include "Intern.hpp"

Intern::Intern()
{
    str[0] = "robotomy request";
    str[1] = "presidential pardon";
    str[2] = "shrubbery creation";
    form[0] = new RobotomyRequestForm();
    form[1] = new PresidentialPardonForm();
    form[2] = new ShrubberyCreationForm();
}

Intern::~Intern()
{
    for (int i = 0; i < 3; i++)
        delete form[i];
}

Intern::Intern(const Intern & copy)
{
    for (int i = 0; i < 3; i++)
        this->str[i] = copy.str[i];
}

Intern & Intern::operator= (const Intern & copy)
{
    if (this == &copy)
        return (*this);
    for (int i = 0; i < 3; i++)
        this->str[i] = copy.str[i];
    return (*this);    
}

const char * Intern::InvalidRequestForm::what() const throw()
{
    return ("The requested form is not known.");
}

Form * Intern::makeForm(std::string form, std::string target)
{
    for (int i = 0; i < 3; i++)
    {
        if (form == this->str[i])
        {
            std::cout << "Intern creates " << form << std::endl; 
            return (this->form[i]->clone(target));
        }
    }
    throw InvalidRequestForm();
}