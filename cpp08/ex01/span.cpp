#include "span.hpp"

Span::Span()
{
    len = 0;
}

Span::Span(unsigned int n)
{
    len = n;
    if (len < 1)
        throw InvalidNum();
}

Span::Span(const Span & copy)
{
    this->len = copy.len;
    std::vector<int>::iterator it;
    int i = 0;
    for (it = arr.begin(); it != arr.end(); ++it)
    {
        this->arr.push_back(copy.arr[i]);
        i++;
    }
}

Span & Span::operator= (const Span & copy)
{
    if (this == &copy)
        return (*this);
    this->len = copy.len;
    std::vector<int>::iterator it;
    int i = 0;
    for (it = arr.begin(); it != arr.end(); ++it)
    {
        this->arr.push_back(copy.arr[i]);
        i++;
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int v)
{
    if (arr.size() < len)
    {
        arr.push_back(v);
    }
    else
        throw OutOfSize();
}

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
    if (arr.size() + std::distance(it, ite) > len)
        throw OutOfSize();
    while(it != ite)
    {
        arr.push_back(*it);
        ++it;
    }
}

int Span::shortestSpan()
{
    if (len < 2)
        throw OnlyOne();

    std::vector<int> arr2;
    for (unsigned int i = 0; i < arr.size(); ++i)
        arr2.push_back(arr[i]);
    sort (arr2.begin(), arr2.end());
    std::vector<int>::iterator it = arr2.begin();
    int min = std::abs(*(it + 1) - *it);
    for (it = arr2.begin(); it != arr2.end(); ++it)
    {
        if (std::abs(*(it + 1) - *it) < min)
            min = std::abs(*(it + 1) - *it);
    }
    return (min);
}

int Span::longestSpan()
{
    if (len < 2)
        throw OnlyOne();

    std::vector<int>::iterator max;
    std::vector<int>::iterator min;
    max = std::max_element(arr.begin(), arr.end());
    min = std::min_element(arr.begin(), arr.end());
    return (*max - *min);
}