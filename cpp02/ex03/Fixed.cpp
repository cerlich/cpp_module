#include "Fixed.hpp"


Fixed::Fixed()
{
    this->point = 0;
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    //std::cout << "Copy constructor called" << std::endl;
    point = copy.getRawBits();

}

Fixed::Fixed(const int i)
{
    //std::cout << "Int constructor called" << std::endl; // int to fixed
    //this->point = i << bits;
    this->point = (int)(i * (1 << Fixed::bits));
}

Fixed::Fixed(const float f)
{                                                           // float to fixed (x)
    //std::cout << "Float constructor called" << std::endl;   // x = floating_input * 2^(fractional_bits)
    this->point = roundf(f * (1 << Fixed::bits));              // 2^bits == 1 << bits
}                                                           

Fixed::~Fixed()
{
   //std::cout << "Destructor called" << std::endl;
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

float Fixed::toFloat( void ) const
{
    return((float)point / (float)(1 << Fixed::bits));
}

int Fixed::toInt( void ) const
{
    return((int)(point >> Fixed::bits));
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a > b)
        return (b);
    else
        return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if ((Fixed)a > (Fixed)b)
        return (b);
    else
        return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if ((Fixed)a > (Fixed)b)
        return (a);
    else
        return (b);
}

Fixed& Fixed::operator= (const Fixed &str)
{
    //std::cout << "Assignation operator called" << std::endl;
    point = str.point;
    return (*this);
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
    return (out << fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &f)
{
    Fixed tmp;
    int val = (f.getRawBits() * this->point) >> this->Fixed::bits;
    tmp.setRawBits(val);
    return (tmp);
}

Fixed Fixed::operator/(const Fixed &f)
{
    Fixed tmp;
    int val = (f.getRawBits() / this->point) >> this->Fixed::bits;
    tmp.setRawBits(val);
    return (tmp);
}

Fixed Fixed::operator-(const Fixed &f)
{
    Fixed tmp;
    int val = (f.getRawBits() - this->point);
    tmp.setRawBits(val);
    return (tmp);
}

Fixed Fixed::operator+(const Fixed &f)
{
    Fixed tmp;
    int val = (f.getRawBits() + this->point);
    tmp.setRawBits(val);
    return (tmp);
}

bool Fixed::operator>(const Fixed &f)
{
    return(this->point > f.getRawBits());
}

bool Fixed::operator<(const Fixed &f)
{
    return(this->point < f.getRawBits());
}

bool Fixed::operator>=(const Fixed &f)
{
    return(this->point >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed &f)
{
    return(this->point <= f.getRawBits());
}

bool Fixed::operator==(const Fixed &f)
{
    return(this->point == f.getRawBits());
}

bool Fixed::operator!=(const Fixed &f)
{
    return(this->point != f.getRawBits());
}

//префикс

Fixed Fixed::operator++()
{
    this->point++;
    return (*this);
}

Fixed Fixed::operator--()
{
    this->point--;
    return (*this);
}

//постфикс

Fixed Fixed::operator--(int val)
{
    (void)val;
    Fixed tmp = *this;
    --*this;
    return (tmp);
}

Fixed Fixed::operator++(int val)
{
    (void)val;
    Fixed tmp = *this;
    ++*this;
    return (tmp);
}