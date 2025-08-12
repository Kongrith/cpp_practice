#include "Zombie.hpp"

int main()
{
    Zombie *Zombie1 = newZombie("Zombie#1");
    Zombie1->announce();
    randomChump("Zombie#2");
    delete Zombie1;
    return (0);
}