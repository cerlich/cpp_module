#include <iostream>

char ft_toupper(int c)
{
    if (c > 96 && c < 123)
        return (c - 32);
    else
        return (c);
}

int main(int ac, char *av[])
{
    int i = 1;
    int j;
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            std::cout << ft_toupper(av[i][j]);
            j++;
        }
        i++;
    }
    std::cout << '\n';
    return (0);
}