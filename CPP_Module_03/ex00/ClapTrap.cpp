/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:34:42 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/12 05:00:43 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name(""), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "ClapTrap : default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "ClapTrap : " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &src)
{
	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	this->hit_point = src.hit_point;
	this->name = src.name;
	this->energy_point = src.energy_point;
	this->attack_damage = src.attack_damage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap :Destructor called:" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	this->hit_point = src.hit_point;
	this->name = src.name;
	this->energy_point = src.energy_point;
	this->attack_damage = src.attack_damage;
	return (*this);
}

void	ClapTrap::displayStatus()
{
	std::cout << "name : " <<  this->name << "\t hit point : " << this->hit_point << "\t energy point : " << this->energy_point << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{

	if (this->energy_point > 0 && this->hit_point > 0)
	{
		if (target == "")
			std::cout << target << "clapsTrap Not found" << std::endl;
		else
		{
			std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
			this->energy_point--;
		}
	}
	else
		std::cout << "you can't do anything if you have no hit points or energy points left" << std::endl;
	this->displayStatus();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy_point && hit_point)
	{
		this->hit_point -= amount;
		std::cout << "ClapTrap " << this->name << " take a Damage " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << this->name << " cant't takeDamage";
	this->displayStatus();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point && this->hit_point)
	{
		this->hit_point += amount;
		this->energy_point--;
		std::cout << "ClapTrap " << this->name << " repairs it self, it gets " << amount << " hit points back." << std::endl;
	}
	else
		std::cout << this->name << " cant't takeDamage";
	this->displayStatus();
}



