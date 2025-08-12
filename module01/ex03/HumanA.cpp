#include "HumanA.hpp"

HumanA::HumanA(std::string name_init, Weapon &weapon_init) : name_(name_init), weapon_(weapon_init)
{
}

void HumanA::attack(void)
{
    std::cout << name_ << " attacks with their " << weapon_.getType() << std::endl;
}