#include "Weapon.hpp"

Weapon::Weapon(std::string init_type) : type_(init_type) {}

std::string Weapon::getType(void)
{
    return (this->type_);
}

void Weapon::setType(std::string type)
{
    this->type_ = type;
}