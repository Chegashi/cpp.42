/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:30:36 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 22:44:11 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    Animal::type = "Dog";
	std::cout << "Dog : default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const & src)
{
	this->type = src.type;
	this->brain = new Brain(*(src.brain));
	std::cout << "Dog : copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Animal : Destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & src)
{
    this->type = src.type;
	this->brain = new Brain(*(src.brain));
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sound 🐶: howhow ♡(ᐢ ᴥ ᐢし)" << std::endl;
}