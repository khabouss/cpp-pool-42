#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNumber(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    return;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int number){
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointNumber = number << this->_bits;
    return;
}

Fixed::Fixed(const float number){
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointNumber = roundf(number * (1 << this->_bits));
    return;
}

float Fixed::toFloat( void ) const{
    return ((float)this->_fixedPointNumber/(1 << this->_bits));
}
int Fixed::toInt( void ) const{
    return (this->_fixedPointNumber >> this->_bits);
}

Fixed & Fixed::operator = (const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointNumber = fixed._fixedPointNumber;
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointNumber;
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointNumber = raw;
}

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance)
{
	ostr << instance.toFloat();
	return (ostr);
}