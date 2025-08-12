#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
private:
    std::string type_;

public:
    Weapon(std::string init_type);
    std::string getType(void);
    void setType(std::string type);
};

#endif