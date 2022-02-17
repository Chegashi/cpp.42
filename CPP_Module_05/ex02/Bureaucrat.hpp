/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:24:39 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 17:04:22 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT 

#include <string>
#include "Form.hpp"
#define MAX_GRADE 1
#define MIN_GRADE 150
class Form;
class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &src);
		~Bureaucrat();

		int			GetGrade()  const;
		std::string	GetName();
		void		increment();
		void		decrement();
		Bureaucrat & operator=(Bureaucrat &rhs);
		bool		signForm(Form &form);
		int			executeForm(Form const & form);
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
		std::string const name;
		int			grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat rhs);

#endif