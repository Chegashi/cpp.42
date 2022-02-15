/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:31:10 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/15 14:57:14 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	try
	{
		if (grade < 1)
			throw "GradeTooHighException";
		if (grade > 150 )
			throw "Bureaucrat::GradeTooLowException";
		else
			this->grade = grade;
	}
	catch (const char *msg)
	{
		std::cerr << msg << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{

}

std::string	Bureaucrat::GetName()
{
	return (this->name);
}

int			Bureaucrat::GetGrade()
{
	return (this->grade);
}

std::ostream & operator<<(std::ostream &o, Bureaucrat rhs)
{
	o << rhs.GetName();
	o << " bureaucrat grade ";
	o << rhs.GetGrade() ;
	return (o);
}
