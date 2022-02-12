/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:17:49 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/12 05:52:28 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(ClapTrap &src);
		~FragTrap();
		FragTrap	& operator=(FragTrap const &src);
		void	attack(const std::string& target);
		void	highFivesGuys(void);
		void	guardGate();
};

#endif

