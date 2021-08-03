#include <iostream>
#include "Array.hpp"

//void ints()
//{
//	std::cout << ">----- Ints -----<" << std::endl;
//	Array<int> array(5);
//	array[0] = 1;
//	array[1] = 2;
//	array[2] = 3;
//	array[3] = 4;
//	array[4] = 5;
//	
//	std::cout << "Exist elem: " << array[0] << std::endl;
//	try{
//		std::cout << "Does not exist elem: ";
//		std::cout << array[6];
//	}
//	catch(std::exception &e)
//	{
//		std::cout << std::endl;
//		std::cout << e.what() << std::endl;
//	}
//
//	std::cout << "Size: " << array.size() << std::endl;
//}
//
//void floats()
//{
//	std::cout << "\n>----- Floats -----<" << std::endl;
//	Array<float> array(5);
//	array[0] = 1.5f;
//	array[1] = 2.5f;
//	array[2] = 3.5f;
//	array[3] = 4.5f;
//	array[4] = 5.5f;
//	
//	std::cout << "Exist elem: " << array[0] << std::endl;
//	try{
//		std::cout << "Does not exist elem: ";
//		std::cout << array[6];
//	}
//	catch(std::exception &e)
//	{
//		std::cout << std::endl;
//		std::cout << e.what() << std::endl;
//	}
//
//	std::cout << "Size: " << array.size() << std::endl;
//}
//
//void strings()
//{
//	std::cout << "\n>----- Strings -----<" << std::endl;
//	Array<std::string> array(5);
//	array[0] = "one";
//	array[1] = "two";
//	array[2] = "three";
//	array[3] = "four";
//	array[4] = "five";
//	
//	std::cout << "Exist elem: " << array[0] << std::endl;
//	try{
//		std::cout << "Does not exist elem: ";
//		std::cout << array[6];
//	}
//	catch(std::exception &e)
//	{
//		std::cout << std::endl;
//		std::cout << e.what() << std::endl;
//	}
//
//	std::cout << "Size: " << array.size() << std::endl;
//}
//
//int main()
//{
//	ints();
//	floats();
//	strings();
//	return (0);
//}

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}