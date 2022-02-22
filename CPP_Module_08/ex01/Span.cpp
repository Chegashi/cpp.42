/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:46:37 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/22 23:06:24 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdlib.h>

Span::Span(unsigned int n) : len(n), index(0)
{
	;

}

Span::~Span()
{
	
}
void	Span::addNumber(int n)
{
	if (this->index < this->len)
	{
		(this->g).push_back(n);
		this->index++;
	}
	else
		throw Span::Max_Len();
	if (this->index == 2)
	{
		this->longe_s = abs(this->g[0] - this->g[1]);
		this->short_s = abs(this->g[0] - this->g[1]);
	}
	else if (this->index > 2)
	{
		int tmp = abs(this->g[this->index - 1] - this->g[this->index - 2]);
		(this->short_s > tmp ? this->short_s = tmp : 1);
		(this->longe_s < tmp ? this->longe_s = tmp : 1);
	}
}

int	Span::longestSpan()
{
	if  (this->g.empty() || this->index == 1)
		throw Span::EmptySpan();
	return (this->longe_s);
}

int	Span::shortestSpan()
{
	if  (this->g.empty())
		throw Span::EmptySpan();
	return (this->short_s);
}