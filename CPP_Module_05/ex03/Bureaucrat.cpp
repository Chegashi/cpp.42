/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:31:10 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/16 22:01:21 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > MIN_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (grade < MAX_GRADE )
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << "Bureaucrat : constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : deconstructor called" << std::endl;

}

Bureaucrat::Bureaucrat(Bureaucrat &src) : name(src.GetName()) , grade(src.GetGrade())
{
	std::cout << "Bureaucrat : copy constructor called" << std::endl;
}
Bureaucrat & Bureaucrat::operator=(Bureaucrat &rhs)
{
	this->grade = rhs.GetGrade();
	return(*this);
}

std::string	Bureaucrat::GetName()
{
	return (this->name);
}

int			Bureaucrat::GetGrade()  const
{
	return (this->grade);
}

void	Bureaucrat::decrement()
{
	if (grade >= MAX_GRADE)
	{
		throw Bureaucrat::GradeTooLowException();
		std::cerr << "you can't decrement the grade" << std::endl;
	}
	this->grade++;
}

void	Bureaucrat::increment()
{
	if (grade <= MIN_GRADE)
	{
		throw Bureaucrat::GradeTooHighException();
		std::cerr << "you can't increment the grade" << std::endl;
	}
	this->grade++;
}
bool	Bureaucrat::signForm(Form &form)
{
	if (this->GetGrade() > form.get_signed())
	{
		std::cout << this->GetName() << " cannot sign " << form.GetName() << " because " << form.get_signed() << " < " << this->GetGrade() << std::endl;
		return (false);
	}
	form.signe();
	std::cout << this->name << "signed" << form.GetName() << std::endl;
	return (true);
}

std::ostream & operator<<(std::ostream &o, Bureaucrat rhs)
{
	o << rhs.GetName() << " bureaucrat grade " << rhs.GetGrade() ;
	return (o);
}
