#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : 
     Form (copy.getName(), copy.getGradeToSign(), copy.getGradeToExec()), target(copy.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator= (const ShrubberyCreationForm & copy)
{
    if (this == &copy)
        return (*this);
    Form::operator=(copy);
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (target);
}

const char * ShrubberyCreationForm::FormNotSigned::what() const throw()
{
    return ("Form not signed.");
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (getSigned())
    {
        if (executor.getGrade() <= getGradeToExec())
        {
            std::ofstream ofs(target +  "_Shrubbery");
            ofs << "         # #### ####" << std::endl
                <<"      ### /\\//#|### |/####" << std::endl
                << "     ##\\/#/ \\||/##/_/##/_#" << std::endl
                << "   ###  \\/###|/ \\/ # ###" << std::endl
                << " ##_\\_#\\_\\## | #/###_/_####" << std::endl
                << "## #### # \\ #| /  #### ##/##" << std::endl
                << " __#_--###`  |{,###---###-~" << std::endl
                << "           \\ }{" << std::endl
                << "            }}{" << std::endl
                << "            }}{" << std::endl
                << "            {{}" << std::endl;
            ofs.close();
                std::cout << executor.getName()<<" plants shrubbery at " << target << std::endl;
        }
        else
            throw GradeTooLowException();
    }
    else
        throw FormNotSigned();
}