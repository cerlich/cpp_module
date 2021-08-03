#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string const target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm & copy);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & copy);
        std::string getTarget() const;
        virtual void execute(Bureaucrat const & executor);
        virtual Form * clone(std::string target);
        class FormNotSigned : public std::exception {
            public:
                virtual const char * what() const throw ();
        };
};

#endif