/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:24:39 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/15 16:19:30 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT 

#include <string>
#define MAX_GRADE 1
#define MIN_GRADE 150 
class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		int			GetGrade();
		std::string	GetName();
		void		increment();
		void		decrement();
		bool		test(int grade);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("grade to high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("grade to Low");
				}
		};
	private:
		std::string name;
		int			grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat rhs);

#endif