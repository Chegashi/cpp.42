/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:40:15 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/15 01:34:12 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON

#include <string>

class Weapon
{
	private:	
		std::string	type;

	public:
		std::string	const	&getType(void);
		void				setType(std::string str);
        Weapon(std::string name);
        ~Weapon();
};


#endif