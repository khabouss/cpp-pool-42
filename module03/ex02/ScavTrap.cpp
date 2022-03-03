#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string name )
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_original = this->_hitPoints;
	std::cout << "ScavTrap Constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called"
		<< std::endl;
	return;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & scavTrap )
{
	std::cout << " = ScavTrap operator has been called" << std::endl;
    this->_name = scavTrap._name;
    this->_hitPoints = scavTrap._hitPoints;
    this->_energyPoints = scavTrap._energyPoints;
    this->_attackDamage = scavTrap._attackDamage;
	return *this;
}

void		ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->_name << " entered Gate Keeper mode" << std::endl;
}

void		ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap " << this->_name << " attack " << target
		<< " causing " << this->_attackDamage << " points of damage!" << std::endl;
}