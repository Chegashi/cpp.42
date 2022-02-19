/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:25 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/19 05:22:10 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <typeinfo>
#include <iostream>
#include <ctype.h>

void	to_char(std::string arg)
{
	try
	{
		int n = std::stoi(arg);
		if (isascii(n))
			std::cout << "char: " << static_cast<char>(n) << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
	}
	catch (...)
	{
		std::cout << "char: " << arg << std::endl;
	}
}

void	to_int(std::string arg)
{
	try
	{
		int n = std::stoi(arg);
		std::cout << "int: " << static_cast<int>(n) << std::endl;
	}
	catch (...)
	{
		std::cout << "int: impossible" << std::endl;
	}
}

void	to_float(std::string arg)
{
	try
	{
		float n = std::stof(arg);
		float f = static_cast<float>(n);
		std::cout << "float: " << f << (f - (int)f ? "" : ".0") << std::endl;
	}
	catch (...)
	{
		std::cout << "float: impossible" << std::endl;
	}
}

void	to_dooble(std::string arg)
{
	try
	{
		double n = std::stod(arg);
		double d = static_cast<double>(n);
		std::cout << "double: " << d << (d - (int)d ? "" : ".0") << "f" << std::endl;
	}
	catch (...)
	{
		std::cout << "double: impossible" << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac !=2 )
	{
		std::cerr << "the conversion is impossible" << std::endl;
		return (0);
	}
	else
	{
		std::string arg = av[1];
		// std::cout << arg << std::endl;
		to_char(arg);
		to_int(arg);
		to_float(arg);
		to_dooble(arg);
	}

	return (0);
}
