/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:26:06 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/15 01:35:13 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name, Weapon *_weapon_) : name(name), weapon(_weapon_) 
{
    ;
}

HumanB::HumanB(std::string name) : name(name), weapon(NULL) 
{
    ;
}
           
HumanB::~HumanB()
{
    ;
}

void HumanB::attack(void)
{
    if (this->weapon)
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}