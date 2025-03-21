#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

class Zombie{
    private:
        std::string name;
    public:

    Zombie(std::string zombiename)
    {
        name = zombiename;
    }

    Zombie()
    {
        name = "unknown";
    }
    ~Zombie() {
        std::cout << name << " has been destroyed!" << std::endl;
    }

    void announce(void)
    {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif