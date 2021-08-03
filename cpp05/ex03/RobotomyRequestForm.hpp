#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string const target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm & copy);
        ~RobotomyRequestForm();

        RobotomyRequestForm & operator=(const RobotomyRequestForm & copy);
        std::string getTarget() const;
        virtual void execute(Bureaucrat const & executor);
        virtual Form * clone(std::string target);
        class FormNotSigned : public std::exception {
            public:
                virtual const char * what() const throw ();
        };
        class FailureRobo: public std::exception {
            public:
                virtual const char * what() const throw ();
        };
};

#endif