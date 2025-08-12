#include "Zombie.hpp"

int main()
{
    Zombie *Zombies = zombieHorde(5, "Zombiee");
    Zombies[0].announce();
    Zombies[1].announce();
    Zombies[2].announce();
    Zombies[3].announce();
    Zombies[4].announce();
    delete[] Zombies;
}