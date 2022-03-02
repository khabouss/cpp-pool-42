#include "Zombie.hpp"

Zombie::Zombie() : _name("") {}

Zombie::~Zombie() {
    std::cout << this->_name << " <-- DESTROYED |" << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName (std::string name) {
    this->_name = name;
}