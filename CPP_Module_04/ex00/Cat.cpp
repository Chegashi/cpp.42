/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:25:13 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 17:03:55 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
    Animal::type = "Cat";
	std::cout << "Cat : default constructor called" << std::endl;
}

Cat::~Cat()
{
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