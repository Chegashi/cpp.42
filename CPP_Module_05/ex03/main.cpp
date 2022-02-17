/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:25 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 15:32:48 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat b1("b1",1);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->execute(b1);

		Intern someRandomIntern2;
		Form* rrf2;
		Bureaucrat b2("b2",1);
		rrf2 = someRandomIntern2.makeForm("Shrubbery Creation", "bind");
		rrf2->execute(b2);

		Intern someRandomIntern3;
		Form* rrf3;
		Bureaucrat b3("b3",1);
		rrf3 = someRandomIntern3.makeForm("Presidential Pardon", "nos");
		rrf3->execute(b3);
		
		// Intern someRandomIntern4;
		// Form* rrf4;
		// Bureaucrat b4("b4",4);
		// rrf4 = someRandomIntern3.makeForm("Presidential Pa4rdon", "nos");
		// rrf4->execute(b4);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
