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

	bool	operator>( const Fixed &rhs ) const ;
	bool	operator<( const Fixed &rhs ) const ;
	bool	operator>=( const Fixed &rhs ) const ;
	bool	operator<=( const Fixed &rhs ) const ;
	bool	operator==( const Fixed &rhs ) const ;
	bool	operator!=( const Fixed &rhs ) const ;
	Fixed	operator+( const Fixed &rhs ) const ;
	Fixed	operator-( const Fixed &rhs ) const ;
	Fixed	operator*( const Fixed &rhs ) const ;
	Fixed	operator/( const Fixed &rhs ) const ;
	Fixed	&operator++( void );
	Fixed	operator++( int );
	Fixed	&operator--( void );
	Fixed	operator--( int );
    Fixed   &operator = (const Fixed &fixed);

	static const Fixed	&min( const Fixed &lhs, const Fixed &rhs );
	static const Fixed	&max( const Fixed &lhs, const Fixed &rhs );

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance);

#endif