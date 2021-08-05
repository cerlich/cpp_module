#include "mutantstack.hpp"

//clang++ -Wall -Wextra -Werror main.cpp mutantstack.cpp

int main()
{
    MutantStack<int> mstack;   
    std::cout << "SIZE " << mstack.size() << std::endl;

    mstack.push(5);
    mstack.push(17);
    std::cout << "TOP " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "TOP " << mstack.top() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    mstack.push(-1);
    std::cout << "SIZE " <<mstack.size() << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }

    /* COPY STACK */
    //MutantStack<int> mstack2(mstack);
//
    //MutantStack<int>::iterator it = mstack2.begin();
    //MutantStack<int>::iterator ite = mstack2.end();
    //++it;
    //--it;
    //while (it != ite)
    //{
    //std::cout << *it << std::endl;
    //++it;
    //}


    //std::stack<int> s(mstack);
    //while (!s.empty())
    //{
    //    std::cout << s.top() << std::endl;
    //    s.pop();
    //}     
    return 0;
}