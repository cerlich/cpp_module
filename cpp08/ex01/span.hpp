#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>


class Span
{
    private:
        std::vector<int> arr;
        unsigned int len;
        Span();        
    public:
        Span(unsigned int n);
        Span(const Span & copy);
        ~Span();
        Span & operator= (const Span & copy);

        void addNumber(int v);
        void addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
        int shortestSpan();
        int longestSpan();
        
        class OutOfSize : public std::exception
        {
            public:
                virtual const char * what() const throw ()
                {
                    return ("The limit has been reached.");
                }
        };
        class OnlyOne : public std::exception
        {
            public:
                virtual const char * what() const throw ()
                {
                    return ("Too few elements.");
                }
        };
        class InvalidNum : public std::exception
        {
            public:
                virtual const char * what() const throw ()
                {
                    return ("Invalid numbers of elements.");
                }
        };        
};

#endif