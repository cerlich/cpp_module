#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array
{
private:
    T *arr;
    unsigned int len;
public:
    Array()
    {
        len = 0;
        arr = nullptr;
        std::cout << "Array is empty." << std::endl;
    }
    Array(unsigned int n)
    {
        this->len = n;
        this->arr = new T[len];
        std::cout << "Create array of " << len << " elements." << std::endl;
    }
    Array(const Array & copy)
    {
       this->len = copy.len;
       unsigned int i;
       arr = new T[len];
       for(i = 0; i < len; ++i)
           this->arr[i] = copy.arr[i];
    }
    Array & operator= (const Array & copy)
    {
        if (this == &copy)
            return (*this);
        this->len = copy.len;
        unsigned int i;
        if (arr)
        {
            delete [] arr;
            arr = nullptr;
        }
        arr = new T[len];      
        for(i = 0; i < len; ++i)
            this->arr[i] = copy.arr[i];
        return (*this);
    }
    ~Array()
    {
        if (arr)
        {
            delete [] arr;
            arr = nullptr;
        }
    }

    class OutLimits : public std::exception
    {
        const char * what() const throw()
        {
            return ("This element is out of the limits.");
        }
    }; 
    T& operator[](unsigned int index)
    {
        if (index < 0)
            throw Array::OutLimits();            
        if (index < len)
            return arr[index];
        else
            throw Array::OutLimits();
    }
    unsigned int size()
    {
        return(len);
    }
};

#endif