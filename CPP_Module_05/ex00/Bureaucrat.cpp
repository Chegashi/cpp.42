/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:31:10 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/14 23:02:56 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int n) : name(name)
{
	try
	{
		if (n < 1)
			throw "GradeTooHighException";
		if (n < 150 )
			throw "Bureaucrat::GradeTooLowException";
		this->grade = n;
	}
	catch (const char *msg)
	{
		std::cerr << "msg" << std::endl;
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
	o << rhs.GetName() << "bureaucrat grade" << rhs.GetGrade() << std::endl;
	return (o);
}
