/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:27:32 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/12 04:51:08 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap claptrap1("linus");
	ClapTrap claptrap2("Bjarne");

	std::cout << std::endl;
	claptrap1.attack("Bjarne");
	claptrap2.takeDamage(4);
	claptrap2.beRepaired(3);
	claptrap2.beRepaired(18);
	claptrap2.attack("linus");
	claptrap1.takeDamage(9);
	return (0);
}