/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:58:31 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/12 06:30:15 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	ClapTrap::name = "";
    ClapTrap::hit_point = 100;
	ClapTrap::energy_point = 100;
	ClapTrap::attack_damage = 30;	
	std::cout << "FragTrap : default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	ClapTrap::name = name;
	ClapTrap::hit_point = 100;
	ClapTrap::energy_point = 100;
	ClapTrap::attack_damage = 30;
	std::cout << "FragTrap : constructor called" << std::endl;
}

FragTrap::FragTrap(ClapTrap &src)
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : Destructor called:" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	std::cout << "ScavTrap : assiniation called:" << std::endl;
	this->name = src.name;
	this->hit_point = src.hit_point;
	this->attack_damage = src.attack_damage;
	this->energy_point = src.energy_point;
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (this->energy_point > 0)
	{

		if (target == "")
			std::cout << target << "FragTrap Not found" << std::endl;
		else
		{
			std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
			this->energy_point--;
		}
	}
	else
		std::cout << "you do anything if you have no hit points or energy points left" << std::endl;
	this->displayStatus();
}

// void	FragTrap::guardGate(void)
// {
// 	std::cout << "FragTrap" << this->name << " is now in Gate keeper mode" << std::endl;
// }

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap" << this->name << " is now on high fives request mode 🙏" << std::endl;
}
