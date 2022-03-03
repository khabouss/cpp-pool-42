#ifndef CLAPTRAP
# define CLAPTRAP

#include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
    int _original;
    

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &clapTrap);
    ~ClapTrap();
    ClapTrap & operator = (const ClapTrap &clapTrap);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    const std::string	&getName( void ) const;
};

std::ostream &	operator<<( std::ostream & ostr, ClapTrap const & instance);

#endif