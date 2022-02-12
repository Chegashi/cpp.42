/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:04:30 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/12 05:43:21 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	ClapTrap::name = "";
	ClapTrap::hit_point = 100;
	ClapTrap::energy_point = 50;
	ClapTrap::attack_damage = 20;
	std::cout << "ScavTrap : default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	ClapTrap::name = name;
	ClapTrap::hit_point = 100;
	ClapTrap::energy_point = 50;
	ClapTrap::attack_damage = 20;
	std::cout << "ScavTrap : constructor called" << std::endl;

}

ScavTrap::ScavTrap(ClapTrap &src)
{
	std::cout << "ScavTrap : Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor called:" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src)
{
	std::cout << "ScavTrap : assiniation called:" << std::endl;
	this->name = src.name;
	this->hit_point = src.hit_point;
	this->attack_damage = src.attack_damage;
	this->energy_point = src.energy_point;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy_point > 0 && this->hit_point > 0)
	{

		if (target == "")
			std::cout << target << "ScavTrap Not found" << std::endl;
		else
		{
			std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
			this->energy_point--;
		}
	}
	else
		std::cout << "you do anything if you have no hit points or energy points left" << std::endl;
	this->displayStatus();
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap" << this->name << " is now in Gate keeper mode" << std::endl;
	this->displayStatus();
}