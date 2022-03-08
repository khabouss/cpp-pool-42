#include  "Cat.hpp"

Cat::Cat() {
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << " -> Cat class default CONSTRUCTOR has been called" << std::endl;
}

Cat::Cat(Cat const & cat){
    *this = cat;
}

Cat::~Cat(){
    delete(this->_brain);
    std::cout << " -> CAT class default DESTRUCTOR has been called" << std::endl;
}

Cat & Cat::operator = (Cat const & cat){
    this->_type = cat.getType();
    *(this->_brain) = *(cat.getBrain());
    return *this;
}

Animal	&Cat::operator=( Animal const &rhs )
{
	std::cout << "Animal Assignement operator for Cat called" << std::endl;
	this->_type = rhs.getType();
	*(this->_brain) = *(rhs.getBrain());
	return *this;
}

void Cat::makeSound() const {
    std::cout << "Cat said : Meeeeaaaaaawwwww ^_^" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->_brain);
}