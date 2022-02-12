/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:04:28 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/12 05:37:33 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP

#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void highFivesGuys(void);
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ClapTrap &src);
		~ScavTrap();
		ScavTrap	& operator=(ScavTrap const &src);
		void	attack(const std::string& target);

		void guardGate();
};

#endif