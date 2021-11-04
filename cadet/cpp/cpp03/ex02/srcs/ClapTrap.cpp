#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Name = "noname";
    Hitpoints = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "ClapTrap <" << Name << "> is called !"<< std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    Hitpoints = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "ClapTrap <" << Name << "> is called !"<< std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap <" << Name << "> is uncalled !"<< std::endl;
}

void ClapTrap::attack(std::string const & target)
{
     if (Energy_points == 0)
    {
        std::cout << "ClapTrap <" << Name \
        << "> has no Energy point !" <<std::endl;
    }
    else
    {
        Energy_points--;
        std::cout << "ClapTrap <" << Name \
        << "> attacks <" << target << ">" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > Hitpoints)
        Hitpoints = 0;
    else
        Hitpoints -= amount;
    std::cout << "ClapTrap <" << Name << "> causing <" << \
    amount << "> points of damage!" <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount + Hitpoints > 10)
        Hitpoints = 10;
    else
        Hitpoints += amount;
    std::cout << "ClapTrap <" << Name << "> is repaired <" << \
    amount << "> points of Hitpoints" <<std::endl;
}