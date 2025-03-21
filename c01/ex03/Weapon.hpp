#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

class Weapon{
private:
    std::string type;
public:

    Weapon()
    {
        type = "unknown";
        std::cout << "Weapon was created" << std::endl;
    }

    Weapon(std::string newtype)
    {
        type = newtype;
    }
    ~Weapon()
    {
        std::cout << type << " Has been destroyed" << std::endl;
    }

    const std::string getType() const
    {
        return(type);
    }

    void setType(std::string newType)
    {
        type = newType;
    }
};

Weapon weapon(std::string type);

#endif