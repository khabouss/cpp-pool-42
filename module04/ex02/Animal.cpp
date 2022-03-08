#include "Animal.hpp"

Animal::~Animal(){
    std::cout << " -> ANIMAL class default DESTRUCTOR has been called" << std::endl;
}

std::string Animal::getType() const{
    return this->_type;
}