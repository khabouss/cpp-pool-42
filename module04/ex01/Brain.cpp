#include "Brain.hpp"

Brain::Brain(){
    std::cout << " -> Brain class default CONSTRUCTOR has been called" << std::endl;
}

Brain::Brain(Brain const & brain){
    *this = brain;
}

Brain::~Brain(){
    std::cout << " -> Brain class default DESTRUCTOR has been called" << std::endl;
}

Brain & Brain::operator = (Brain const & brain){
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = brain._ideas[i];
    return *this;
}