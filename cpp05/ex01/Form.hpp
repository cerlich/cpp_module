#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const name;
        const int gradeToSign;
        const int gradeToExec;
        bool Signed;
    public:
        Form();
        Form(std::string name, int Sign, int Exec);
        Form(const Form & copy);
        ~Form();

        Form & operator=(const Form & copy);
        void beSigned(Bureaucrat &);
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        bool getSigned() const;

        class GradeTooHighException : public std::exception {
            public:
                virtual const char * what() const throw ();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what() const throw ();
        };
};

std::ostream& operator<< (std::ostream &out, const Form &Form);

#endif