#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include "Weapon.hpp"

class HumanB{
private:
    std::string name;
    Weapon* weapon;
public:

    HumanB(std::string newname) : name(newname), weapon(NULL)
    {
    }
    ~HumanB()
    {
        std::cout << name << " has been destroyed" << std::endl;
    }
    void setWeapon(Weapon& setBWeapon)
    {
        weapon = &setBWeapon;
    }
    void attack()
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
};

#endif