#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("Gun");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Knife");
        bob.attack();
    }
    std::cout << "         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << std::endl;
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Klachinkof");
        jim.attack();
    }
    return 0;
}