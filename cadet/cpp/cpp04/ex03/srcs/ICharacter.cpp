/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:39:04 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:39:07 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"

Character::Character()
{
	Name = "";
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
	std::cout << "new Character!" << std::endl;
}

Character::Character(const Character& src)
{
	*this = src;
	std::cout << "copy Character!" << std::endl;
}

Character::Character(std::string const &Name)
{
	this->Name = Name;
	for (int i = 0; i < 4; i++)
		materia[i] = NULL;
	std::cout << "new Character!" << std::endl;
}

Character & Character::operator=(const Character& src)
{
	if (this != &src)
	{
		Name = src.getName();
		for (int i = 0; i < 4; i++)
		{
			if (src.materia[i] != NULL)
				materia[i] = src.materia[i];
			else
				materia[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] != NULL)
			delete materia[i];
	}
	std::cout << "delete Character!" << std::endl;
}

std::string const &Character::getName() const
{
	return (Name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4 && m != NULL; i++)
	{
		if (materia[i] == NULL)
		{
			std::cout << i <<"'s " << m->getType() << " is equiped !" <<std::endl;
			materia[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if ((idx >= 0 && idx <= 3) && materia[idx])
	{
		std::cout << idx <<"'s " << materia[idx]->getType() << " is unequiped !" <<std::endl;
		materia[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx <= 3) && materia[idx])
		materia[idx]->use(target);
}
