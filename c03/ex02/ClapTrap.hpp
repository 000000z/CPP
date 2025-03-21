#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    unsigned int HitPoint;
    unsigned int EnergyPoint;
    unsigned int AttackDamage;
public:

    ClapTrap()
    {
        std::cout << "ClapTrap Constructor has been called" << std::endl;
    }
    ClapTrap(std::string str)
    {
        std::cout << "ClapTrap named Constructor has been called" << std::endl;
        this->name = "unknown";
        HitPoint = 10;
        EnergyPoint = 10;
        AttackDamage = 0;
        if(!str.empty())
            this->name = str;
    }
    ~ClapTrap()
    {
        std::cout << "ClapTrap Destroyer has been called" << std::endl;
    }

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void);

};


#endif
