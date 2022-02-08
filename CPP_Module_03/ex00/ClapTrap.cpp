/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:34:42 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/08 17:19:28 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int				ClapTrap::nbr_claps = 0;

void	ClapTrap::ft_save(ClapTrap &src)
{
	if (ClapTrap::nbr_claps < NBR_CLAPS_MAX)
		ClapTrap::claps[(ClapTrap::nbr_claps)++] = src;
	else
		std::cout << "you can't have more than:" << ClapTrap::nbr_claps << "CLAPS" << std::endl;
}

ClapTrap::ClapTrap() : name(""), hit_point(10), energy_point(10), attack_damage(0)
{
	ClapTrap::ft_save(*this);
}

ClapTrap::~ClapTrap()
{
	;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), energy_point(10), attack_damage(0)
{
	ClapTrap::ft_save(*this);
}

ClapTrap::ClapTrap(ClapTrap &src)
{
	*this = src;
	ClapTrap::ft_save(*this);
}

void	ClapTrap::attack(const std::string& target)
{
	int j;

	for(j = 0; j < ClapTrap::nbr_claps && target == ClapTrap::claps[j].name && target != ""; j++)
		;
	if (j == ClapTrap::nbr_claps)
		std::cout << target << "clapsTrap Not found" << std::endl;
	else
		ClapTrap::claps[j].takeDamage(this->attack_damage);
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