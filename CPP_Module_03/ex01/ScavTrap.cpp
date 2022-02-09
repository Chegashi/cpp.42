/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:04:30 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/09 17:51:45 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	ClapTrap::name = "";
	ClapTrap::energy_point = 50;
	ClapTrap::attack_damage = 20;	
}

ScavTrap::ScavTrap(std::string name)
{
	ClapTrap::name = name;
	ClapTrap::energy_point = 50;
	ClapTrap::attack_damage = 20;
	ClapTrap::ft_save(*this);
	std::cout << "ScavTrap : constructor called" << std::endl;

}

ScavTrap::ScavTrap(ClapTrap &src)
{
	std::cout << "ScavTrap : Copy constructor called" << std::endl;
	*this = src;
	ClapTrap::ft_save(*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor called:" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	int j;

	if (this->energy_point > 0)
	{
		for(j = 0; j < ClapTrap::nbr_claps && target != ScavTrap::claps[j].name && target != ""; j++)
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
