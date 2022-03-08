#ifndef BRAIN
# define BRAIN
#include <iostream>

class Brain
{
private:
    

public:
    Brain();
    Brain(Brain const & brain);
    ~Brain();
    Brain & operator = (Brain const & brain);
    std::string _ideas[100];
};

#endif