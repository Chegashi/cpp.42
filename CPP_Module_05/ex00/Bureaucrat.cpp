/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:31:10 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/15 17:36:23 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << "Bureaucrat : constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : deconstructor called" << std::endl;

}

std::string	Bureaucrat::GetName()
{
	return (this->name);
}

int			Bureaucrat::GetGrade()
{
	return (this->grade);
}

void	Bureaucrat::decrement()
{
	if (grade >= 150)
	{
		throw Bureaucrat::GradeTooLowException();
		std::cerr << "you can't decrement the grade" << std::endl;
	}
	this->grade++;
}

void	Bureaucrat::increment()
{
	if (grade <= 1)
	{
		throw Bureaucrat::GradeTooHighException();
		std::cerr << "you can't increment the grade" << std::endl;
	}
	this->grade++;
}

std::ostream & operator<<(std::ostream &o, Bureaucrat rhs)
{
	o << rhs.GetName() << " bureaucrat grade " << rhs.GetGrade() ;
	return (o);
}
