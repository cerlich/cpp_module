#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    protected:
        std::string const name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(const Bureaucrat & copy);
        Bureaucrat & operator=(const Bureaucrat & copy);
        ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        void setGrade(int grade);
        void incGrade();
        void decGrade();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char * what() const throw ();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw ();
        };
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &Bureaucrat);

#endif