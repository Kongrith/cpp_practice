#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name_;

public:
    Zombie(std::string init_name = "") : name_(init_name) {};
    ~Zombie();
    void announce(void);
    void set_name(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif