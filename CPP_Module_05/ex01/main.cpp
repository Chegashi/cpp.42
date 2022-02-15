/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:25 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/15 22:57:16 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Bureaucrat.hpp"
#include <iostream>

int	main()
{
	try
	{
		Form f1("f1", 5, 3);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
