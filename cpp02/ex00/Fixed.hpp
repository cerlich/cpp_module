#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int point;
        static const int bits;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& copy);

        Fixed& operator= (const Fixed &str);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

int main(void);

#endif