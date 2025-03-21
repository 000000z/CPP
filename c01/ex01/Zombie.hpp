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
    Zombie()
    {
        name = "unkown";
    }

    Zombie(std::string zombiename)
    {
        name = zombiename;
    }    

    ~Zombie()
    {
        std::cout << name << " has been destroyed!" << std::endl;
    }

    void setname(std::string zombiename)
    {
        std::cout << "A zombie from the horde has been created" << std::endl;
        name = zombiename;
    }
    void announce()
    {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }
};

Zombie* zombieHorde(int N, std::string name);

#endif