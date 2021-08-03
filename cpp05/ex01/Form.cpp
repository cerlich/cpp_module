#include "Form.hpp"

Form::Form() : name("no name"), gradeToSign(0), gradeToExec(0)
{
    Signed = false;
}

Form::Form(std::string name, int Sign, int Exec) : name(name), gradeToSign(Sign), gradeToExec(Exec)
{
    Signed = false;
    if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooHighException();
    if (gradeToExec > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}   

Form::Form(const Form & copy) : name(copy.name), gradeToSign(copy.gradeToSign), gradeToExec(copy.gradeToExec)
{
    Signed = copy.Signed;
}

Form::~Form()
{
}

Form & Form::operator=(const Form & copy)
{
    if (this == &copy)
        return (*this);
    Signed = copy.Signed;
    return (*this);
}

std::string Form::getName() const
{
    return (name);
}

int Form::getGradeToExec() const
{
    return (gradeToExec);
}

int Form::getGradeToSign() const
{
    return (gradeToSign);
}

bool Form::getSigned() const
{
    return (Signed);
}

const char * Form::GradeTooHighException::what() const throw ()
{
    return ("Grade too high!");
}

const char * Form::GradeTooLowException::what() const throw ()
{
    return ("Grade too low!");
}

void Form::beSigned(Bureaucrat & b)
{
    if (b.getGrade() > 0 && b.getGrade() < 151)
    {
        if (b.getGrade() <= gradeToSign)
        {
            Signed = true;
        }
        else
        {
            std::cout << b.getName() << " cannot sign " << name << " because ";
            throw Form::GradeTooLowException();
        }
    }
}

std::ostream& operator<< (std::ostream &out, const Form &Form)
{
    if (Form.getSigned())
        return (out << Form.getName() << " signed.");
    else
        return (out << Form.getName() << " not signed.");
}