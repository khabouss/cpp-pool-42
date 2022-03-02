#ifndef FIXED
# define FIXED

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _fixedPointNumber;
    static const int _bits = 8;
    
public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed(const int number);
    Fixed(const float number);
    ~Fixed();

    Fixed & operator = (const Fixed &fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance);

#endif