#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    unsigned int HitPoint;
    unsigned int EnergyPoint;
    unsigned int AttackDamage;
public:

    ClapTrap()
    {
    }
    ClapTrap(std::string str)
    {
        std::cout << "Constructor has been called" << std::endl;
        this->name = "unknown";
        HitPoint = 10;
        EnergyPoint = 10;
        AttackDamage = 0;
        if(!str.empty())
            this->name = str;
    }
    ~ClapTrap()
    {
        std::cout << "Destroyer has been called" << std::endl;
    }

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName(void);
    unsigned int getHitPoints(void) { return (HitPoint); }
    unsigned int getEnergyPoints(void) { return (EnergyPoint); }
    unsigned int getAttackDamage(void) { return (AttackDamage); }

};


#endif