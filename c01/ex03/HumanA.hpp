#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include "Weapon.hpp"


class HumanA{
private:
    std::string name;
    Weapon& weapon;
public:
    
    HumanA(std::string newname, Weapon& newweapon) : name(newname), weapon(newweapon)
    {
        std::cout << newname << " was created with " << newweapon.getType() << std::endl;
    }

    ~HumanA()
    {
        std::cout << name << " has been destroyed" << std::endl;
        // std::cout << weapon.getType() << " has been destroyed" << std::endl;
    }
    void attack()
    {
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
    }
};

#endif