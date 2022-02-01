/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:34:58 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/11 14:25:44 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H

#define ZOMBIE_H

#include <string>

class Zombie
{
    private:
			std::string name;

    public:
		Zombie();
		~Zombie();
		void set_name(std::string name);
		void	annonce(void);

};

Zombie* zombieHorde( int N, std::string name );

#endif