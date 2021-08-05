#include "easyfind.hpp"

//clang++ -Wall -Wextra -Werror main.cpp

int main()
{
    std :: list < int > l;
    std::vector <int> v;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
try
{
    easyfind(l, 5);
    easyfind(v, 40);
    //easyfind(v, 2);
    //easyfind(l, 0);   
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
    return (0);
}