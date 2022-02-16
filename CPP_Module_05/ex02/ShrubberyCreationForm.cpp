/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:17:21 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/16 22:23:42 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

#define TREES "  ****\n     ********\n    **  ******\n     *   ******     ******\n         ******   *********\n          ****  *****   ***\n          ***  ***     **\n    *************       *\n  ******************\n *****   H*****H*******\n ***     H-___-H  *********\n  ***    H     H      *******\n   **    H-___-H        *****\n     *   H     H         ****\n         H     H         ***\n         H-___-H         **\n         H     H         *\n         H-___-H\n"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target , 145, 137), target(target + "_shrubbery")
{
	std::cout << "ShrubberyCreationForm : constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src.target, 145, 137), target(src.target)
{
	std::cout << "ShrubberyCreationForm : constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : deconstructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm &rhs)
{
	this->target = rhs.target;
	return (*this);
}

int	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->get_executer() < executor.GetGrade())
		throw Form::GradeTooLowException();
	std::ofstream ofs(this->target);
	ofs << TREES << std::endl;
	ofs.close();
	std::cout << this->target << "writes ASCII trees" << std::endl;
	return (1);
}

std::ostream & operator<<(std::ostream &o, ShrubberyCreationForm rhs)
{
	o << rhs.GetName() << " ShrubberyCreationForm Required grades: sign" << std::endl;// << this->get , exec 13 " << rhs.GetGrade() ;
	return (o);
}
