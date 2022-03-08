#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAniml") {
    std::cout << " -> WrongANIMAL class default CONSTRUCTOR has been called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & animal){
    *this = animal;
}

WrongAnimal::~WrongAnimal(){
    std::cout << " -> WrongANIMAL class default DESTRUCTOR has been called" << std::endl;
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal & animal){
    this->_type = animal._type;
    return *this;
}

std::string WrongAnimal::getType() const{
    return this->_type;
}

void WrongAnimal::makeSound() const {
    std::cout << "I'm an WrongAnimal :/" << std::endl;
}