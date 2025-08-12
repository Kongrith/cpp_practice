#include "Zombie.hpp"

void randomChump(std::string assign_name)
{
    Zombie temp_zombie(assign_name);
    temp_zombie.announce();
}