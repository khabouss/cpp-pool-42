#ifndef DOG
# define DOG

#include "Animal.hpp"

class Dog  : public Animal
{
    
public:
    Dog();
    Dog(Dog & dog);
    ~Dog();
    Dog & operator = (Dog & dog);
    void makeSound() const;
};


#endif