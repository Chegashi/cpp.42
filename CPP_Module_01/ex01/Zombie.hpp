/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:34:58 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/13 01:43:17 by mochegri         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie();
	
		void	set_name(std::string name);
		void	annonce(void);

};

Zombie* newZombie( std::string name );
void randomChump( std::string name ) ;
Zombie* zombieHorde( int N, std::string name );

#endif