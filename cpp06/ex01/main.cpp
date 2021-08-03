#include <iostream>

typedef struct Data
{
    int num;
} Data;

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast <uintptr_t> (ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

int main()
{
    Data data;

    data.num = 5;
    uintptr_t p = serialize(&data);
    std::cout << data.num <<std::endl;
    Data * newData = deserialize(p);
    std::cout << newData->num << std::endl;
}