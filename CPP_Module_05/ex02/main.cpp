/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:25 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 17:15:16 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main()
{
	try
	{	
		ShrubberyCreationForm shru("shru");
		Bureaucrat b1("b1", 15);
		shru.execute(b1);

		// ShrubberyCreationForm shru_er("shru_er");
		// std::cout << shru_er << std::endl;
		// Bureaucrat b3("b3", 137);
		// shru_er.execute(b3);

		RobotomyRequestForm robo("robo");
		Bureaucrat b2("b2", 16);
		robo.execute(b2);
	
		// RobotomyRequestForm robo_er0("robo_er");
		// Bureaucrat b5("b5", 46);
		// robo_er0.execute(b5);

		PresidentialPardonForm pre("pre");
		Bureaucrat b4("b4", 5);
		pre.execute(b4);

		// PresidentialPardonForm pre_er("pre_er");
		// Bureaucrat b6("b6", 6);
		// pre.execute(b6);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
