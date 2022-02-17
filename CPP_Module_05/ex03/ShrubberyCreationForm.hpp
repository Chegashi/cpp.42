/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:18:03 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 14:09:15 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_H
#define SHRUBBERY_H
#include "Form.hpp"
#include <string>
#include <ostream>

class ShrubberyCreationForm : virtual public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm		& operator=(ShrubberyCreationForm &rhs);
		virtual ~ShrubberyCreationForm();
		virtual int	execute(Bureaucrat const & executor) const;

		std::string	get_target();
	private:
		std::string	target;
		static const int	grade_to_sign_it;
		static const int	grade_exec;
};

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm rhs);

#endif
