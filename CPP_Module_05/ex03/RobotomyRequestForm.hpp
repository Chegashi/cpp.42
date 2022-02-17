/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:17:23 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/16 23:31:22 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_H
#define ROBOTOMY_H
#include "Form.hpp"
#include <string>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm();
		int	execute(Bureaucrat const & executor) const;

		std::string	get_target();
	private:
		std::string	target;
		static const int	grade_to_sign_it;
		static const int	grade_exec;
};

#endif
