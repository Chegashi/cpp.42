/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:13:15 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 00:23:39 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

t_level array[4];

void init_array(void)
{
	std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4 ; i++)
	{
		array[i].id = 0;
		array[i].name = names[i];
	}
	array[0].fun = &Karen::debug;
	array[1].fun = &Karen::info;
	array[2].fun = &Karen::warning;
	array[3].fun = &Karen::error; 
}

Karen::Karen()
{
	init_array();
}

Karen::~Karen()
{
    ;
}

void    Karen::complain(std::string level)
{
	int i;
	for (i = 0; i < 4 && level != array[i].name ; i++)
		;
	(this->*(array[i].fun))();
}

void    Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}