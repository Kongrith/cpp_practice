#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name_ << '\n';
}

void Zombie::set_name(std::string name)
{
    this->name_ = name;
}