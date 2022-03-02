#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

std::string const & Weapon::getType(void) const {
    return this->_type;
}

void Weapon::setType(const std::string &type) {
    this->_type = type;
}