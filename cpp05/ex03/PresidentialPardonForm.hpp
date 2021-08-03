#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string const target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm & copy);
        ~PresidentialPardonForm();

        PresidentialPardonForm & operator=(const PresidentialPardonForm & copy);
        std::string getTarget() const;
        virtual void execute(Bureaucrat const & executor);
        virtual Form * clone(std::string target);
        class FormNotSigned : public std::exception {
            public:
                virtual const char * what() const throw ();
        };
        //class FailurePardon : public std::exception {
        //    public:
        //        virtual const char * what() const throw ();
        //};
};

#endif