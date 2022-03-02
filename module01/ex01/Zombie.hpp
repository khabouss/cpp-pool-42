#ifndef ZOMBIE
# define ZOMBIE

#include <iostream>

class Zombie {

    public:
        Zombie();
        ~Zombie(void);
        void announce(void);
        void setName(std::string name);
    
    private:
        std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif