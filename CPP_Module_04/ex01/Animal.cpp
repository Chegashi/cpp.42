/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:01:13 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 22:03:38 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal() : type("Animal")
{
	std::cout << "Animal : default constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	this->type = src.type;
	std::cout << "Animal : copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal : Destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal & src)
{
    this->type = src.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "animal sound  🐻🙈🙉🙊🦍🐫....." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}