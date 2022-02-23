/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:45:38 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/23 07:22:54 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <iostream>
#include <cstdlib>

class Span
{
	class EmptySpan : public std::exception
	{
		virtual const char * what() const throw() { return ("EmptySpan"); }
	};
	class Max_Len : public std::exception
	{
		virtual const char * what() const throw() { return ("Max_Len");	}	
	};
	public:
		Span(unsigned int n);
		Span(const Span &src);
		~Span();

		void	generate();
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
		Span & operator=(Span &rhs);
		std::vector<int> g;

	private:
		int	len;
		int	index;
		int	short_s;
		int longe_s;
		int max;
		int min;
		Span();
};

#endif
