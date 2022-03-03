#include "ScavTrap.hpp"

int	main( void )
{
	std::cout << " -------------------------  " << std::endl;
	{
		ScavTrap scav("Taha");

		scav.attack("Jmes Bond");
		scav.takeDamage(6);
		scav.beRepaired(4);
		scav.takeDamage(3);
		scav.guardGate();
		scav.beRepaired(8);
		scav.takeDamage(17);
	}
	std::cout << " -------------------------  " << std::endl;
	{
		ClapTrap clap("clap");

		clap.attack("Handsome Jack");
		clap.takeDamage(6);
		clap.beRepaired(4);
		clap.takeDamage(3);
		clap.beRepaired(8);
		clap.takeDamage(17);
	}
	std::cout << " -------------------------  " << std::endl;
}