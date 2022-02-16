/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:49:31 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/16 22:22:45 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_H
#define PRESIDENTIAL_H
#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm();
		int	execute(Bureaucrat const & executor) const;

		std::string	get_target();
	private:
		std::string	target;
		static const int	grade_to_sign_it;
		static const int	grade_exec;
};


#endif
