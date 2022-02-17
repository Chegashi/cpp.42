/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:54:08 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 01:24:28 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

request array[3];

Intern::Intern()
{   
    array[0].name = "robotomy request";
    array[1].name = "Shrubbery Creation";
    array[2].name = "Presidential Pardon";
    array[0].fun = &Intern::make_RobotomyRequestForm;
    array[1].fun = &Intern::make_ShrubberyCreationForm;
    array[2].fun = $Intern::make_PresidentialPardonForm;
	std::cout << "Intern : constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern : deconstructor called" << std::endl;
}

Intern::Intern(const Intern & src)
{
    (void)src;
	std::cout << "Intern : copy constructor called" << std::endl;
}

Intern & Intern::operator=(Intern &rhs)
{
    (void)rhs;
	return (*this);
}

PresidentialPardonForm *Intern::make_PresidentialPardonForm(std::string const target)
{
    PresidentialPardonForm *ptr_f = new PresidentialPardonForm(target);
    return (ptr_f);
}

RobotomyRequestForm *Intern::make_RobotomyRequestForm(std::string const target)
{
    RobotomyRequestForm *ptr_f = new RobotomyRequestForm(target);
    return (ptr_f);
}

ShrubberyCreationForm *Intern::make_ShrubberyCreationForm(std::string const target)
{
    ShrubberyCreationForm *ptr_f = new ShrubberyCreationForm(target);
    return (ptr_f);
}

Form *Intern::makeForm(std::string const form, std::string const target)
{
    // for (int i = 0; ;)
    return (ptr_f);
}
