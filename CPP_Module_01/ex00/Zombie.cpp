/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:34:56 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/13 01:45:03 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void    Zombie::annonce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "🧟 im crated 🧟" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << "🧟 im dead 🧟" << std::endl;
}

void    Zombie::set_name(const std::string name)
{
    this->name = name;
    this->annonce();
}
