#ifndef WEAPON
# define WEAPON
# include <iostream>

class Weapon
{
    private:
    std::string _type;
    
    public:
    Weapon(std::string type);
    ~Weapon();
    std::string const & getType(void) const;
    void setType(const std::string &type);
};


#endif