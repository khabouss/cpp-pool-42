#include  "Cat.hpp"

Cat::Cat() {
    this->_type = "Cat";
    std::cout << " -> Cat class default CONSTRUCTOR has been called" << std::endl;
}

Cat::Cat(Cat & cat){
    *this = cat;
}

Cat::~Cat(){
    std::cout << " -> CAT class default DESTRUCTOR has been called" << std::endl;
}

Cat & Cat::operator = (Cat & cat){
    this->_type = cat._type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat said : Meeeeaaaaaawwwww ^_^" << std::endl;
}