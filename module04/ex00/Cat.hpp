#ifndef CAT
# define CAT

#include "Animal.hpp"

class Cat : public Animal
{
    
public:
    Cat();
    Cat(Cat & cat);
    ~Cat();
    Cat & operator = (Cat & cat);
    void makeSound() const;
};


#endif