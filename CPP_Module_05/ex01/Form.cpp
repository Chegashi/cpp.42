/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:41:53 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/16 15:50:35 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(std::string const name, int const grade_to_sign_it, int const grade_exec) :
name(name), is_signed(false), grade_to_sign_it(grade_to_sign_it), grade_exec(grade_exec)
{
	if (grade_exec > MIN_GRADE || grade_to_sign_it > MIN_GRADE)
		throw Form::GradeTooLowException();
	else if (grade_exec < MAX_GRADE || grade_to_sign_it < MAX_GRADE)
		throw Form::GradeTooHighException();
	std::cout << "Form : constructor called" << std::endl;
}

Form::Form(Form & src) : name(src.name), is_signed(src.is_signed),grade_to_sign_it(src.grade_to_sign_it), grade_exec(src.grade_exec)
{
	std::cout << "Form : copy constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form : copy deconstructor called" << std::endl;
}

bool	Form::it_is_signed()
{
	return(this->is_signed);
}
int			Form::get_executer()
{
	return (this->grade_exec);
}

int	Form::get_signed()
{
	return (this->grade_to_sign_it);
}

Form & Form::operator=(Form &rhs)
{
	this->is_signed = rhs.is_signed;
	return (*this);
}

std::string Form::GetName()
{
	return (this->name);
}

void	Form::beSigned(Bureaucrat b)
{
	if (b.GetGrade() > this->grade_to_sign_it)
		throw Form::GradeTooLowException();
	this->is_signed = true;
}

void	Form::signe()
{
	this->is_signed =  true;
}

std::ostream & operator<<(std::ostream &o, Form rhs)
{
	o << rhs.GetName() << " form is signied[" << (rhs.it_is_signed() ? "true" : "false") << "]" ;
	return (o);
}
