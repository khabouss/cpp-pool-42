#ifndef HUMAN_B
# define HUMAN_B
#include "Weapon.hpp"

class HumanB
{
    private:
    Weapon *_weapon;
    std::string _name;    

    public:
    HumanB(std::string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &weapon);
};

#endif