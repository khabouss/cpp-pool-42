#include  "WrongCat.hpp"

WrongCat::WrongCat() {
    this->_type = "WrongCat";
    std::cout << " -> WrongCat class default CONSTRUCTOR has been called" << std::endl;
}

WrongCat::WrongCat(WrongCat & cat){
    *this = cat;
}

WrongCat::~WrongCat(){
    std::cout << " -> WrongCAT class default DESTRUCTOR has been called" << std::endl;
}

WrongCat & WrongCat::operator = (WrongCat & cat){
    this->_type = cat._type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat said : Meeeeaaaaaawwwww ^_^" << std::endl;
}