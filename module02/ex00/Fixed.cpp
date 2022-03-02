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

Fixed & Fixed::operator = (const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointNumber = fixed.getRawBits();
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