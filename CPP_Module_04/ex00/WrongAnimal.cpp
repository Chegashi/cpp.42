/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:01:13 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 17:05:43 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal : default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	this->type = src.type;
	std::cout << "WrongAnimal : copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : Destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & src)
{
    this->type = src.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound  π¦π¦π¦πΈππ’π¦ππ²ππ¦π³ππ¬....." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}