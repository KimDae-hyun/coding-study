/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:39:49 by daekim            #+#    #+#             */
/*   Updated: 2021/11/25 18:39:52 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
    Name = "noname";
   Hitpoints = 100;
   Energy_points = 100;
   Attack_damage = 30;
   std::cout << "FragTrap <" << Name << "> is called !"<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
   Hitpoints = 100;
   Energy_points = 100;
   Attack_damage = 30;
   std::cout << "FragTrap <" << Name << "> is called !"<< std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		Name = src.Name;
      Hitpoints = src.Hitpoints;
      Energy_points = src.Energy_points;
      Attack_damage = src.Attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
   std::cout << "FragTrap <" << Name << "> is uncalled !"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
   std::cout << "FragTrap <" << Name << "> is copy called !"<< std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap <" << Name << "> HighFive !!"<< std::endl;
}
