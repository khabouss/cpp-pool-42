#ifndef ANIMAL
# define ANIMAL

#include <iostream>

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(Animal & animal);
    virtual ~Animal();
    Animal & operator = (Animal & animal);
    
    virtual void makeSound() const;

    std::string getType() const;
};

#endif