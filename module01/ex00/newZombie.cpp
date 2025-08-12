#include "Zombie.hpp"

Zombie *newZombie(std::string assign_name)
{
    Zombie *obj = new Zombie(assign_name);
    return obj;
}