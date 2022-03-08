#ifndef DOG
# define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog  : public Animal
{
private:
    Brain *_brain;
public:
    Dog();
    Dog(Dog const & dog);
    ~Dog();
    virtual Dog & operator = (Dog const & dog);
    virtual Animal	&operator=( const Animal &other );
    virtual void makeSound() const;

    virtual Brain	*getBrain( void ) const;
};


#endif