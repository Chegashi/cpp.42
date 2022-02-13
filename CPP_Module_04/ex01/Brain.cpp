/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:01:13 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 17:05:43 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain() : type("Brain")
{
	std::cout << "Brain : default constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
	this->type = src.type;
	// for (size_t i = 0; i < Brain::ideas_nbrs; i++)
	// {
	// 	this->ideas[i] = src.ideas[i];
	// }
	std::cout << "Brain : copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor called" << std::endl;
}

Brain & Brain::operator=(const Brain & src)
{
    this->type = src.type;
	return (*this);
}
