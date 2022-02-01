/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:18:06 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/15 01:13:13 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 0)
        return (NULL);
    Zombie* zombies = new Zombie[N];
    for (int i=0 ; i < N; i++)
		zombies[i].set_name(name);
	return (zombies);
}