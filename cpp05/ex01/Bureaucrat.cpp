#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name): name(name)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) : name(copy.name)
{
    this->grade = copy.grade;    
}
Bureaucrat & Bureaucrat::operator=(const Bureaucrat & copy)
{
    if (this == &copy)
        return (*this);
    this->grade = copy.grade;
    return(*this);
}

const char * Bureaucrat::GradeTooHighException::what() const throw ()
{
    return ("Grade too high!");
}

const char * Bureaucrat::GradeTooLowException::what() const throw ()
{
    return ("Grade too low!");
}

int Bureaucrat::getGrade() const
{
    return(grade);
}

std::string Bureaucrat::getName() const
{
    return(name);
}

void Bureaucrat::setGrade(int grade)
{
    if (grade >= 1 && grade <= 150)
        this->grade = grade;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::decGrade()
{
    if (this->grade < 150)
        this->grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::incGrade()
{
    if (this->grade > 1)
        this->grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::signForm(Form & form)
{
    if (form.getSigned())
    {
        std::cout << getName() << " signs " << form.getName() << std::endl;
    }
    else
    {
        std::cout << getName() << " cannot sign " << form.getName() << " because ";
        throw Bureaucrat::GradeTooLowException();
    }
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &Bureaucrat)
{
    return (out << Bureaucrat.getName() << " bureaucrat grade " << Bureaucrat.getGrade());
}