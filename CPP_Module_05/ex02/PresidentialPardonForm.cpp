/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:51:02 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 17:14:20 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target , 25, 5), target(target + "_shrubbery")
{
	std::cout << "PresidentialPardonForm : constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src.target, 25, 25), target(src.target)
{
	std::cout << "PresidentialPardonForm : constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm : deconstructor called" << std::endl;
}

int	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->get_executer() < executor.GetGrade())
		throw Form::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return (1);
}
