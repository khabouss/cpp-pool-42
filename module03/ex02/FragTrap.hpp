#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap( void );
	FragTrap( const std::string &name );
	FragTrap( const FragTrap &src );
	~FragTrap( void );

	void attack(const std::string& target);

	FragTrap	&operator=( const FragTrap &other );

	void		highFivesGuys( void );

private:
	

};

#endif