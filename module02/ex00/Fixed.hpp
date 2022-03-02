#ifndef FIXED
# define FIXED

#include <iostream>

class Fixed
{
private:
    int _fixedPointNumber;
    static const int _bits = 8;
    
public:
    Fixed();
    Fixed(const Fixed &fixed);
    ~Fixed();
    Fixed & operator = (const Fixed &fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif