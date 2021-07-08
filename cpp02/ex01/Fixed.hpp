#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int point;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& copy);
        Fixed(const int i);
        Fixed(const float f);

        Fixed& operator= (const Fixed &str);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);

int main(void);

#endif