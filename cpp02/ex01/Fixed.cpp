#include "Fixed.hpp"

Fixed::Fixed()
{
    this->point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    //point = copy.getRawBits();
    point = copy.point;

}

Fixed::Fixed(const int i)
{
    this->point = i;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
    this->point = roundf(f);
    std::cout << "Float constructor called" << std::endl;
}

//int Fixed::getRawBits( void ) const
//{
//    std::cout << "getRawBits member function called" << std::endl;
//    return(point);
//}

//void Fixed::setRawBits( int const raw )
//{
//    this->point = raw;
//}

Fixed::~Fixed()
{
   std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &str)
{
    std::cout << "Assignation operator called" << std::endl;
    point = str.point;
    return (*this);
}

//std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
//{
//    return ();
//}

float Fixed::toFloat( void ) const
{
    return((float)point);
}

int Fixed::toInt( void ) const
{
    return((int)point);
}

