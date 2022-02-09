/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:34:38 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/09 15:56:46 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ClapTrap_H
#define _ClapTrap_H
#include <string>
#define NBR_CLAPS_MAX 5
class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &src);
		~ClapTrap();
		void attack(const std::string& target);

	protected:
		std::string	name;
		int			hit_point;
		int			energy_point;
		int			attack_damage;
		static int	nbr_claps;
		static ClapTrap claps[NBR_CLAPS_MAX];
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		static void	ft_save(ClapTrap &src);


};


#endif