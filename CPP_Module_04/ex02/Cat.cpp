/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:25:13 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 22:04:42 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
    Animal::type = "Cat";
	std::cout << "Cat : default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const & src)
{
	this->type = src.type;
	std::cout << "Cat : copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Animal : Destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & src)
{
    this->type = src.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "cat sound 😻: miouuuuuu (⌯・▾・⌯)" << std::endl;
}