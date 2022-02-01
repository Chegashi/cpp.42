/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:06 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/15 01:33:49 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    this->type = name;
}

Weapon::~Weapon(void)
{
    ;    
}

std::string	Weapon::getType(void) const
{
    return (this->type);
}

void	Weapon::setType(std::string str)
{
    this->type = str;
}


