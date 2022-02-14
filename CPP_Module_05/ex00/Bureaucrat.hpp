/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:24:39 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/14 22:55:21 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT 

#include <string>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int n);
		~Bureaucrat();

		int			GetGrade();
		std::string	GetName();
	private:
		std::string name;
		int			grade;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat);

#endif