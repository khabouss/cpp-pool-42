#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	std::cout << " -------------------------  " << std::endl;
	{
		FragTrap fragTrap;

		fragTrap.attack("Handsome Jack");
		fragTrap.takeDamage(6);
		fragTrap.beRepaired(4);
		fragTrap.takeDamage(3);
		fragTrap.highFivesGuys();
		fragTrap.beRepaired(8);
		fragTrap.takeDamage(17);
	}
	std::cout << " -------------------------  " << std::endl;
	{
		ScavTrap scravTrap("scravTrap");

		scravTrap.attack("Handsome Jack");
		scravTrap.takeDamage(6);
		scravTrap.beRepaired(4);
		scravTrap.takeDamage(3);
		scravTrap.guardGate();
		scravTrap.beRepaired(8);
		scravTrap.takeDamage(17);
	}
	std::cout << " -------------------------  " << std::endl;
	{
		ClapTrap clapTrap("clapTrap");

		clapTrap.attack("Handsome Jack");
		clapTrap.takeDamage(6);
		clapTrap.beRepaired(4);
		clapTrap.takeDamage(3);
		clapTrap.beRepaired(8);
		clapTrap.takeDamage(17);
	}
	std::cout << " -------------------------  " << std::endl;
}