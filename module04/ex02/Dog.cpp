#include  "Dog.hpp"

Dog::Dog(){
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << " -> DOG class default CONSTRUCTOR has been called" << std::endl;
}

Dog::Dog(Dog const & dog){
    *this = dog;
}

Dog::~Dog(){
    delete(this->_brain);
    std::cout << " -> DOG class default DESTRUCTOR has been called" << std::endl;
}

Dog & Dog::operator = (Dog const & dog){
    this->_type = dog.getType();
    *(this->_brain) = *(dog.getBrain());
    return *this;
}

Animal	&Dog::operator=( Animal const &rhs )
{
	std::cout << "Animal Assignement operator for Dog called" << std::endl;
	this->_type = rhs.getType();
	*(this->_brain) = *(rhs.getBrain());
	return *this;
}

void Dog::makeSound() const {
    std::cout << "Dog said : Woooooooooof *_*" << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->_brain);
}