/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:34:42 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/07 23:51:44 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

#define CLAPS_NBR  10 

ClapTrap		claps[CLAPS_NBR];
int				ClapTrap::nbr_claps = 0;

void	ft_save(ClapTrap &src)
{
	claps[ClapTrap::nbr_claps++] = src;
	std::cout << ClapTrap::nbr_claps << std::endl;
}

ClapTrap::ClapTrap() : name(""), hit_point(10), energy_point(10), attack_damage(0)
{
	ft_save(*this);
}

ClapTrap::~ClapTrap()
{
	;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), energy_point(10), attack_damage(0)
{
	ft_save(*this);
}

ClapTrap::ClapTrap(ClapTrap &src)
{
	*this = src;
	ft_save(*this);
}

void	ClapTrap::attack(const std::string& target)
{
	int j;

	for(j = 0; j < CLAPS_NBR && target == claps[j].name && target != ""; j++)
		;
	if (j == CLAPS_NBR)
		std::cout << target << "clapsTrap Not found" << std::endl;
	else
		claps[j].takeDamage(this->attack_damage);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy_point)
		this->hit_point -= amount;
	else
		std::cout << this->name << " cant't takeDamage";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point)
		this->hit_point += amount;
	else
		std::cout << this->name << " cant't takeDamage";
}