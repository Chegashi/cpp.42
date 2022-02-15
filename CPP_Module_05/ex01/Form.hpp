/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:41:36 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/15 22:46:46 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H 

#include <string>
#include "Bureaucrat.hpp"
#define MAX_GRADE 1
#define MIN_GRADE 150
class Bureaucrat;
class Form
{
	public:
		Form(std::string const name, int const grade_to_signed, int const grade_to_exex);
		Form(Form &src);
		~Form();

		int			get_signed();
		int			get_executer();
		bool		it_is_signed();
		Form		& operator=(Form &rhs);
		std::string	GetName();
		void		beSigned(Bureaucrat b);
		void		signe();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("grade too Low");
				}
		};

	private:
		std::string const	name;
		bool	is_signed;
		int	const	grade_to_sign_it;
		int	const	grade_exec;
};

std::ostream & operator<<(std::ostream & o, Form rhs);

#endif