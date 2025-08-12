#include "HumanB.hpp"

HumanB::HumanB(std::string name_init) : name_(name_init), weapon_(0)
{
}

/*
HumanB::HumanB(std::string TypeName) : _weapon(0), _name(TypeName) {
}
*/

void HumanB::attack(void)
{
    std::cout << name_ << " attacks with their " << weapon_->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    weapon_ = &weapon;
}