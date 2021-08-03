#include "iter.hpp"

template <typename T>
void iter_elem(T & elem)
{
    std::cout << static_cast<T>(elem + 1);
}

template <typename T>
void print_elem(T & elem)
{
    std::cout << elem;
}

int main( void ) {

    int arr[5] = {1, 2, 3, 4, 5};
    char arr2[5] = "abcd";

    ::iter(arr, 5, iter_elem);
    ::iter(arr, 5, print_elem);

    :: iter(arr2, 5, print_elem);
    ::iter(arr2, 5, iter_elem);    

return 0;
}