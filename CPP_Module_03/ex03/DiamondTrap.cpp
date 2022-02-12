/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:26:52 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/12 06:51:33 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "";
	this->_name = "_clap_name";
    FragTrap::hit_point = 100;
	ScavTrap::energy_point = 100;
	FragTrap::attack_damage = 30;
	std::cout << "FragTrap : default constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(std::string name) 
{
	this->name = name;
	this->_name = name + "_clap_name";
    FragTrap::hit_point = 100;
	ScavTrap::energy_point = 100;
	FragTrap::attack_damage = 30;
	std::cout << "FragTrap : constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(DiamondTrap &src)
{
	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "FragTrap : Destructor called:" << std::endl;
}

// void	FragTrap::attack(const std::string& target)
// {
// 	if (this->energy_point > 0)
// 	{

// 		if (target == "")
// 			std::cout << target << "FragTrap Not found" << std::endl;
// 		else
// 		{
// 			std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
// 			this->energy_point--;
// 		}
// 	}
// 	else
// 		std::cout << "you do anything if you have no hit points or energy points left" << std::endl;
// }

void	DiamondTrap::whoAmI(void)
{
	std::cout << "ClapTrap::name : " << this->_name << " | name : " << this->name  << std::endl;
}
