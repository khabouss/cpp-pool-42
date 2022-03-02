#include "Zombie.hpp"

void announceZombies(int N, Zombie *zombies)
{
    for (int i = 0; i < N; i++)
    {
        zombies[i].announce();
    }
}

int main()
{
    int z = 3;
    std::cout << " * ATTENTION !! " << z << " Zombies Are Coming !! *\n" << std::endl;
    Zombie *horde = zombieHorde(z, "ZOMBIE");
    announceZombies(z, horde);
    std::cout << std::endl;
    delete[] horde;
    std::cout << std::endl;
    return 0;
}