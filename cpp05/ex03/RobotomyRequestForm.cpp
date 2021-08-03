#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy) : 
     Form (copy.getName(), copy.getGradeToSign(), copy.getGradeToExec()), target(copy.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator= (const RobotomyRequestForm & copy)
{
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (target);
}

const char * RobotomyRequestForm::FormNotSigned::what() const throw()
{
    return ("Form not signed.");
}

const char * RobotomyRequestForm::FailureRobo::what() const throw()
{
    return ("Failed robotomize.");
}


void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    int num;
    if (getSigned())
    {
        if (executor.getGrade() <= getGradeToExec())
        {
            num = rand() % 2 + 1;
            std::cout << num << '\n';
            if (num == 1)
                std::cout << target <<" has been robotomized successfully." << std::endl;
            if (num == 2)
               throw FailureRobo();
        }
        else
            throw GradeTooLowException();
    }
    else
        throw FormNotSigned();
}

Form * RobotomyRequestForm::clone(std::string target)
{
    return (new RobotomyRequestForm(target));
}