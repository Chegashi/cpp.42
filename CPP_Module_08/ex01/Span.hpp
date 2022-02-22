/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:45:38 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/22 23:05:53 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>

class Span
{
	class EmptySpan : public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("EmptySpan");	
		}	
	};
	class Max_Len : public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("Max_Len");	
		}	
	};
	public:
		Span(unsigned int n);
		~Span();

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

	private:
		std::vector<int> g;
		const int	len;
		int			index;
		int		short_s;
		int			longe_s;
		Span();

};

#endif