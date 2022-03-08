#ifndef WRONG_ANIMAL
# define WRONG_ANIMAL

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(WrongAnimal & Wronganimal);
    ~WrongAnimal();
    WrongAnimal & operator = (WrongAnimal & animal);
    
    void makeSound() const;

    std::string getType() const;
};

#endif