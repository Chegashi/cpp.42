/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:34:42 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/08 18:57:25 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	ClapTrap::nbr_claps = 0;
ClapTrap ClapTrap::claps[];

ClapTrap::ClapTrap() : name(""), hit_point(10), energy_point(10), attack_damage(0)
{
	// ClapTrap::ft_save(*this);
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "constructor called" << std::endl;
	ClapTrap::ft_save(*this);
}

ClapTrap::ClapTrap(ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	ClapTrap::ft_save(*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called:" << std::endl;
}

void	ClapTrap::ft_save(ClapTrap &src)
{
	if (ClapTrap::nbr_claps < NBR_CLAPS_MAX)
		ClapTrap::claps[(ClapTrap::nbr_claps)++] = src;
	else
		std::cout << "you can't have more than:" << ClapTrap::nbr_claps << "CLAPS" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	int j;

	if (this->energy_point > 0)
	{
		for(j = 0; j < ClapTrap::nbr_claps && target != ClapTrap::claps[j].name && target != ""; j++)
			;
		if (j == ClapTrap::nbr_claps)
			std::cout << target << "clapsTrap Not found" << std::endl;
		else
		{
			std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
			ClapTrap::claps[j].takeDamage(this->attack_damage);
			this->energy_point--;
		}
	}
	else
		std::cout << "you do anything if you have no hit points or energy points left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy_point)
	{
		this->hit_point -= amount;
		std::cout << "ClapTrap " << this->name << " take a Damage " << this->attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << this->name << " cant't takeDamage";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point)
	{
		this->hit_point += amount;
		this->energy_point--;
		std::cout << "ClapTrap " << this->name << " repairs it self, it gets " << amount << " hit points back." << std::endl;
	}
	else
		std::cout << this->name << " cant't takeDamage";
}