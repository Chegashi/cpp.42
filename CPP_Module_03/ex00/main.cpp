/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:27:32 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/08 18:54:51 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int		main()
{
	ClapTrap t1("linus");
	ClapTrap t2("Bjarne");
	ClapTrap t3("jonson");
	t1.attack("Bjarne");
	t1.attack("jonson");
	t2.beRepaired(2);
	return (0);
}