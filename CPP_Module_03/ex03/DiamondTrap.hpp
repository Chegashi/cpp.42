/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:25:30 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/12 06:38:24 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DiamondTrap_H
#define _DiamondTrap_H
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap 
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap &src);
		~DiamondTrap();

		using FragTrap::hit_point;
		using FragTrap::attack_damage;
		using ScavTrap::energy_point;
		using ScavTrap::attack; 

        void    whoAmI();
	private:
        std::string _name;
};

#endif

// Do you know the -Wshadow and -Wno-shadow compiler flags?