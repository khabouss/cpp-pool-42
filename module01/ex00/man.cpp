#include "Zombie.hpp"

int main()
{
    std::cout << "Creating Zombie Dumber by calling newZombie()" << std::endl;
    Zombie *dumber = newZombie("Dumber");
    dumber->announce();
    delete(dumber);
    std::cout << std::endl;

    std::cout << "Creating Zombie Harry by calling randomChump()" << std::endl;
    randomChump("Harry");
    std::cout << std::endl;

    std::cout << "Creating Zombie Dumb by calling the constuctor" << std::endl;
    Zombie dumb("Dumb");
    dumb.announce();
    return 0;
}