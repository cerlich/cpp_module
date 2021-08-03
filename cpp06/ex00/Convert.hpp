#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <exception>
#include <limits>
#include <cmath>

class Convert
{
private:
    double v;
public:
    Convert();
    Convert(const Convert & copy);
    Convert & operator=(const Convert & copy);
    ~Convert();
    void tryConvert(std::string av);
    void print_all();
    void print_char();
    void print_int();
    void print_float();
    void print_double();
    class InvalidArgs : public std::exception
    {
        virtual const char * what() const throw();
    };
};

#endif