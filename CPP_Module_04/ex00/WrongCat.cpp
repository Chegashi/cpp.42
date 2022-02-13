/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:25:13 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 17:03:55 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat : default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	this->type = src.type;
	std::cout << "WrongCat : copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & src)
{
    this->type = src.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sound 😻: miouuuuuu (⌯・▾・⌯)" << std::endl;
}