/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:31:10 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/15 16:26:41 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (test(grade))
		this->grade = grade;
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

bool	Bureaucrat::test(int grade)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150 )
			throw Bureaucrat::GradeTooLowException();
		else
			return (true);
	}
	catch (GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	catch (GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
}

void	Bureaucrat::decrement()
{
	if (test(this->grade + 1))
		this->grade++;
	else
		std::cout << "you can't decrement the grade" << std::endl;
}

void	Bureaucrat::increment()
{
	if (test(this->grade - 1))
		this->grade--;
	else
		std::cout << "you can't increment the grade" << std::endl;
	
}

std::ostream & operator<<(std::ostream &o, Bureaucrat rhs)
{
	o << rhs.GetName() << " bureaucrat grade " << rhs.GetGrade() ;
	return (o);
}
