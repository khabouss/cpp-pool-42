#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name(""), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	this->_original = _hitPoints;
	std::cout << "Default constructor for ClapTrap called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name) , _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
    std::cout << "Copy Constructor has been called" << std::endl;
    *this = clapTrap;
    return;
}

ClapTrap::~ClapTrap() {
    std::cout << "Desstructor has been called" << std::endl;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &clapTrap) {
    std::cout << " = operator has been called" << std::endl;
    this->_name = clapTrap._name;
    this->_hitPoints = clapTrap._hitPoints;
    this->_energyPoints = clapTrap._energyPoints;
    this->_attackDamage = clapTrap._attackDamage;
    return *this;
}

const std::string	&ClapTrap::getName( void ) const
{
	return this->_name;
}

std::ostream &	operator<<( std::ostream & ostr, ClapTrap const & instance)
{
	ostr << "ClapTrap " << instance.getName();
	return ostr;
}

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << this->_name << " attack " << target
		<< " causing " << this->_attackDamage << " points of damage!"
		<< std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	this->_energyPoints -= amount;
	if (this->_energyPoints < 0)
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " damage and is quite unwell by now..." << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " took " << amount
			<< " hit points, OUCH! Only got " << this->_energyPoints
			<< " energy points left." << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	this->_energyPoints += amount;
	if (this->_energyPoints > this->_original)
	{
		this->_energyPoints = this->_original;
		std::cout << "You can't heal more than your max!" << std::endl;
	}
	std::cout << "ClapTrap " << this->_name << " was just repaired "
		<< amount << " energy points, now he's got " << this->_energyPoints
		<< ". It ain't much, but it's honest work" << std::endl;
}