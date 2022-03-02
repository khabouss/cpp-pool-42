#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNumber(0) {
}

Fixed::Fixed(const Fixed &fixed) {
    *this = fixed;
    return;
}

Fixed::~Fixed() {
}

Fixed::Fixed(const int number){
    this->_fixedPointNumber = number << this->_bits;
    return;
}

Fixed::Fixed(const float number){
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
    this->_fixedPointNumber = fixed._fixedPointNumber;
    return *this;
}

int Fixed::getRawBits( void ) const {
    return this->_fixedPointNumber;
}

void Fixed::setRawBits( int const raw ){
    this->_fixedPointNumber = raw;
}

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance)
{
	ostr << instance.toFloat();
	return (ostr);
}

bool	Fixed::operator>( const Fixed &rhs ) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<( const Fixed &rhs ) const
{
	return (rhs > *this);
}

bool	Fixed::operator>=( const Fixed &rhs ) const
{
	return (!(*this < rhs));
}

bool	Fixed::operator<=( const Fixed &rhs ) const
{
	return (!(*this > rhs));
}

bool	Fixed::operator==( const Fixed &rhs ) const
{
	return (rhs.getRawBits() == this->getRawBits());
}

bool	Fixed::operator!=( const Fixed &rhs ) const
{
	return (!(rhs == *this));
}

Fixed	Fixed::operator+( const Fixed &rhs ) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-( const Fixed &rhs ) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*( const Fixed &rhs ) const
{
	Fixed	result(this->toFloat() * rhs.toFloat());

	return (result);
}

Fixed	Fixed::operator/( const Fixed &rhs ) const
{
	Fixed	result(this->toFloat() / rhs.toFloat());

	return (result);
}

Fixed	&Fixed::operator++( void )
{
	this->_fixedPointNumber++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

Fixed	&Fixed::operator--( void )
{
	this->_fixedPointNumber--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	old(*this);

	--(*this);
	return (old);
}

const Fixed		&Fixed::min( const Fixed &lhs, const Fixed &rhs )
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

const Fixed		&Fixed::max( const Fixed &lhs, const Fixed &rhs )
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}