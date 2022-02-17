/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:25 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/17 16:06:57 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try
	{
		// Bureaucrat b2("B1", 151);
		// Bureaucrat b3("B2", 0);
		Bureaucrat b1("B1", 2);
		std::cout << b1 << std::endl;
		b1.decrement();
		std::cout << b1 << std::endl;	
		b1.increment();
		std::cout << b1 << std::endl;

		// Bureaucrat b2("B2", 150);
		// std::cout << b2 << std::endl;
		// b2.decrement();

		// Bureaucrat b3("B3", 1);
		// std::cout << b3 << std::endl;	
		// b3.increment();
		// std::cout << b3 << std::endl;
	
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
