#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    private:
        std::string str[3];// = {"robotomy request", "presidential pardon", "shrubbery creation"};
        Form * form[3]; //= {new RobotomyRequestForm(), new PresidentialPardonForm(), new ShrubberyCreationForm()};
    public:
        Intern();
        Intern(const Intern & copy);
        Intern & operator= (const Intern & copy);
        ~Intern();
        Form * makeForm(std::string form, std::string target);

        class InvalidRequestForm : public std::exception {
            public:
                virtual const char * what() const throw ();
        };
};

#endif