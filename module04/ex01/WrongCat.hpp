#ifndef WRONG_CAT
# define WRONG_CAT

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    
public:
    WrongCat();
    WrongCat(WrongCat & cat);
    ~WrongCat();
    WrongCat & operator = (WrongCat & cat);
    void makeSound() const;
};


#endif