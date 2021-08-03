#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* a, size_t len, void (*f)(T& elem))
{   
    for (size_t i = 0; i < len; ++i)
    {
        f(a[i]);
    }
    std::cout << std::endl;
}

#endif