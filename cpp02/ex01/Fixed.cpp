#include "Fixed.hpp"


Fixed::Fixed()
{
    this->point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    point = copy.getRawBits();

}

Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl; // int to fixed
    //this->point = i << bits;
    this->point = (int)(i * (1 << Fixed::bits));
}

Fixed::Fixed(const float f)
{                                                           // float to fixed (x)
    std::cout << "Float constructor called" << std::endl;   // x = floating_input * 2^(fractional_bits)
    this->point = roundf(f * (1 << Fixed::bits));           // 2^bits == 1 << bits
}                                                           

int Fixed::getRawBits( void ) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return(point);
}

void Fixed::setRawBits( int const raw )
{
    this->point = raw;
}

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

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
    return (out << fixed.toFloat());
}

float Fixed::toFloat( void ) const
{
    return((float)point / (float)(1 << Fixed::bits));
}

int Fixed::toInt( void ) const
{
    return((int)(point >> Fixed::bits));
}