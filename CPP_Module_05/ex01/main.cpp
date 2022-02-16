/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:25 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/16 15:52:58 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try
	{
		Form f1("f1", 3, 3);
		std::cout << f1 << std::endl;
		Bureaucrat b1("b1", 10);
		b1.signForm(f1);
		std::cout << f1 << std::endl;

	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
