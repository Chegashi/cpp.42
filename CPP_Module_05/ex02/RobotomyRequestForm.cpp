/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:40:12 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 13:58:07 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target , 145, 137), target(target + "_shrubbery")
{
	std::cout << "RobotomyRequestForm : constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src.target, 72, 45), target(src.target)
{
	std::cout << "ShrubberyCreationForm : constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm : deconstructor called" << std::endl;
}

int	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static int i = 0;
	if (this->get_executer() < executor.GetGrade())
		throw Form::GradeTooLowException();
	if (i++ % 2)
	{
		std::cout << this->target << " has been robotomized successfully 50\\% of the time" << std::endl;
		return (1);	
	}
	else
		std::cout << this->target << " has been robotomized failed" << std::endl;
	return (0);
}
