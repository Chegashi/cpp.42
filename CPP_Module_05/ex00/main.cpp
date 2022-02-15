/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:25 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/15 16:27:26 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	// Bureaucrat b2("B2", 1501);
	// Bureaucrat b3("B3", -8);
	// Bureaucrat b1("B1", 100);
	// std::cout << b1 << std::endl;
	// b1.decrement();
	// std::cout << b1 << std::endl;
	// b1.increment();
	// std::cout << b1 << std::endl;
	// Bureaucrat b4("B4", 1);
	// b4.increment();
	// std::cout << b4 << std::endl;
	Bureaucrat b5("B5", 150);
	b5.decrement();
	std::cout << b5 << std::endl;
	return 0;
}
