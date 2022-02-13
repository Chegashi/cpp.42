/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:30:36 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 17:03:34 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
    Animal::type = "Dog";
	std::cout << "Dog : default constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Animal : Destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & src)
{
    this->type = src.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sound 🐶: howhow ♡(ᐢ ᴥ ᐢし)" << std::endl;
}