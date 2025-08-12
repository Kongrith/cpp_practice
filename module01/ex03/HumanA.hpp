#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string name_;
    Weapon &weapon_;

public:
    HumanA(std::string name_init, Weapon &weapon_init);
    void attack(void);
};

#endif