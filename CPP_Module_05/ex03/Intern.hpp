/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:45:51 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 01:26:50 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTER_H
#define INTER_H 

#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;
class Intern
{
	public:
		Intern();
		Intern(const Intern &src);
		~Intern();

		Intern & operator=(Intern &rhs);
        Form *makeForm(std::string const form, std::string const target);
	private:
		ShrubberyCreationForm *make_ShrubberyCreationForm(std::string const target);
		RobotomyRequestForm *make_RobotomyRequestForm(std::string const target);
		PresidentialPardonForm *make_PresidentialPardonForm(std::string const target);
};

typedef Form *  (Intern::*fun_ptr) (std::string const target);

typedef struct	_request
{
    std::string name;
	fun_ptr fun;
}				request;

std::ostream & operator<<(std::ostream & o, Intern rhs);

#endif