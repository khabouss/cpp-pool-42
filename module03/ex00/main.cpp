#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Taha");

    std::cout << " -------------------------  " << std::endl;

	clap.attack("Jamess Bond");
	clap.takeDamage(6);
	clap.beRepaired(4);
	clap.takeDamage(3);
	clap.beRepaired(8);
	clap.takeDamage(17);

    std::cout << " -------------------------  " << std::endl;
    return (0);
}