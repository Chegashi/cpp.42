/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:32:47 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/23 07:51:37 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main()
{
	try{
		Span sp = Span(6);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(17);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "**********************************" << std::endl;

		Span sa = Span(5);
		sa.generate();
		std::cout << sa.shortestSpan() << std::endl;
		std::cout << sa.longestSpan() << std::endl;

			std::cout << "**********************************" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}