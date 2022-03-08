#ifndef CAT
# define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

private:
    Brain *_brain;

public:
    Cat();
    Cat(Cat const & cat);
    ~Cat();
    virtual Cat & operator = (Cat const & cat);
    virtual Animal	&operator=( const Animal &other );
    virtual void makeSound() const;

    virtual Brain	*getBrain( void ) const;
};


#endif