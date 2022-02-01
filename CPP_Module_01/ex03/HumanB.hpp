/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:25:01 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/15 01:17:45 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon weapon);
		~HumanB();
        void    attack(void);
		void	setWeapon(Weapon);
};

#endif 