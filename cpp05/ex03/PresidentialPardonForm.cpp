#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Pardon", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy) : 
     Form (copy.getName(), copy.getGradeToSign(), copy.getGradeToExec()), target(copy.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator= (const PresidentialPardonForm & copy)
{
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
    return (target);
}

const char * PresidentialPardonForm::FormNotSigned::what() const throw()
{
    return ("Form not signed.");
}

//const char * PresidentialPardonForm::FailurePardon::what() const throw()
//{
//    return ("Cannot pardon.");
//}


void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (getSigned())
    {
        if (executor.getGrade() <= getGradeToExec())
        {
            std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
        }
        else
            throw GradeTooLowException();
    }
    else
        throw FormNotSigned();
}

Form * PresidentialPardonForm::clone(std::string target)
{
    return(new PresidentialPardonForm(target));
}