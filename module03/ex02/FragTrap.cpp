#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_original = this->_hitPoints;
	std::cout << "FragTrap constructor" << std::endl;
	return;
}

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap destructor" << std::endl;
	return;
}

FragTrap::FragTrap( FragTrap const & src )
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & clapTrap )
{
	std::cout << " = FragTrap operator has been called" << std::endl;
    this->_name = clapTrap._name;
    this->_hitPoints = clapTrap._hitPoints;
    this->_energyPoints = clapTrap._energyPoints;
    this->_attackDamage = clapTrap._attackDamage;
    return *this;
}

void		FragTrap::highFivesGuys( void )
{
	std::cout << "Hey gimmmmmme a high five :D" << std::endl;
}

void		FragTrap::attack( std::string const & target )
{
	std::cout << "FragTrap " << this->_name << " attack " << target
		<< " causing " << this->_attackDamage << " points of damage!" << std::endl;
}