/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:25 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 16:27:40 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try
	{
		// Bureaucrat b0("B0", 2);
		// std::cout << b0 << std::endl;
		// b0.decrement();
		// std::cout << b0 << std::endl;	
		// b0.increment();
		// std::cout << b0 << std::endl;

		Form f1("f1", 3, 3);
		std::cout << f1 << std::endl;
		Bureaucrat b1("b1", 3);
		b1.signForm(f1);
		std::cout << f1 << std::endl;

		// Form f2("f2", 4, 4);
		// std::cout << f2 << std::endl;
		// Bureaucrat b2("b2", 3);
		// b2.signForm(f2);
		// std::cout << f2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
