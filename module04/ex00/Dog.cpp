#include  "Dog.hpp"

Dog::Dog(){
    this->_type = "Dog";
    std::cout << " -> DOG class default CONSTRUCTOR has been called" << std::endl;
}

Dog::Dog(Dog & dog){
    *this = dog;
}

Dog::~Dog(){
    std::cout << " -> DOG class default DESTRUCTOR has been called" << std::endl;
}

Dog & Dog::operator = (Dog & dog){
    this->_type = dog._type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog said : Woooooooooof *_*" << std::endl;
}