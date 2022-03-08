#include "Animal.hpp"

Animal::Animal() : _type("Animl") {
    std::cout << " -> ANIMAL class default CONSTRUCTOR has been called" << std::endl;
}

Animal::Animal(Animal const & animal){
    *this = animal;
}

Animal::~Animal(){
    std::cout << " -> ANIMAL class default DESTRUCTOR has been called" << std::endl;
}

Animal & Animal::operator = (Animal const & animal){
    this->_type = animal.getType();
    return *this;
}

std::string Animal::getType() const{
    return this->_type;
}

void Animal::makeSound() const {
    std::cout << "I'm an Animal :D" << std::endl;
}