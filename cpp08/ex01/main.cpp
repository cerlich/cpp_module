#include "span.hpp"

//clang++ -Wall -Wextra -Werror main.cpp span.cpp

int main()
{
try
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}


///*  OUT OF SPACE */


//try
//{
//    Span sp = Span(1);
//    sp.addNumber(17);  
//    sp.addNumber(-9);
//    std::cout << sp.shortestSpan() << std::endl;
//    std::cout << sp.longestSpan() << std::endl;  
//}
//catch(const std::exception& e)
//{
//    std::cerr << e.what() << '\n';
//}

/* MORE THAN 1000 ELEMENTS */

//std::vector<int> vec;
//
//for (int i = 0;  i < 1001; ++i)
//    vec.push_back(i);
//
//std::vector<int>::iterator it = vec.begin();
//std::vector<int>::iterator ite = vec.end();
//
//try
//{
//    Span sp = Span(1100);
//    sp.addNumber(it, ite);
//
//    std::cout << sp.shortestSpan() << std::endl;
//    std::cout << sp.longestSpan() << std::endl;          
//}
//catch(const std::exception& e)
//{
//    std::cerr << e.what() << '\n';
//}

}
