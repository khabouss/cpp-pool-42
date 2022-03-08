#ifndef ANIMAL
# define ANIMAL

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;

public:
    virtual ~Animal();
    virtual Animal		&operator=( const Animal &other ) = 0;
    virtual void makeSound() const = 0;
    std::string getType() const;
    virtual Brain		*getBrain( void ) const = 0;
};

#endif