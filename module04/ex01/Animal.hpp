#ifndef ANIMAL
# define ANIMAL

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(Animal const & animal);
    virtual ~Animal();
    virtual Animal		&operator=( const Animal &other );
    
    virtual void makeSound() const;

    std::string getType() const;
    virtual Brain		*getBrain( void ) const = 0;
};

#endif