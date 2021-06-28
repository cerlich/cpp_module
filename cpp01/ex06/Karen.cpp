#include "Karen.hpp"

enum Level {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
    NULLSTR
};

Level test(std::string const& inString)
{
    if (inString == "DEBUG") return DEBUG;
    if (inString == "INFO") return INFO;
    if (inString == "WARNING") return WARNING;
    if (inString == "ERROR") return ERROR;
    return (NULLSTR);
}

void Karen::complain(std::string level)
{
    switch (test(level))
    {
    case DEBUG:
        debug();
        break;
    case INFO:
        info();
        break;
    case WARNING:
        warning();
        break;
    case ERROR:
        error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}

void Karen::debug(void)
{
    std::cout << "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
    info();
}

void Karen::info(void)
{
    std::cout <<  "[INFO]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
    warning();
}

void Karen::warning(void)
{
     std::cout <<  "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
    error();
}

void Karen::error(void)
{
    std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}
