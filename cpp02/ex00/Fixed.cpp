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

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
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
    point  = str.getRawBits();
    return (*this);
}