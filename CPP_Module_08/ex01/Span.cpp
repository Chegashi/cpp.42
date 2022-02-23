/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:46:37 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/23 07:51:57 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdlib.h>
#include <vector>

Span::Span(unsigned int n) : len(n), index(0) { }

Span::Span(const Span &src) : len(src.len), index(src.index)
{
	this->g = src.g;
}

Span::~Span() { }

Span & Span::operator=(Span &rhs)
{
	this->len = rhs.len;
	this->index = rhs.len;
	this->g.clear();
	for (std::vector<int>::iterator it = rhs.g.begin(); it ==rhs.g.end(); it++)
		this->g.push_back(*it);
	return (*this);
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
}

int	Span::longestSpan()
{
	std::vector<int> tmp;
	if  (this->g.empty() || this->index == 1)
		throw Span::EmptySpan();
	if (this->index == 2)
		return (abs(this->g[0] - this->g[1]));
	else if (this->index > 2)
	{
		tmp = this->g;
		std::sort(tmp.begin(), tmp.end());
	}
	return (abs(tmp[tmp.capacity() - 1] - tmp[0]));
}

int	Span::shortestSpan()
{
	std::vector<int> tmp;
	if  (this->g.empty() || this->index == 1)
		throw Span::EmptySpan();
	else if (this->index >= 2)
	{
		tmp = this->g;
		this->short_s = abs(this->g[0] - this->g[1]);
		std::sort(tmp.begin(), tmp.end());
		for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; it++)
		{
			if (abs(*it - *(it + 1)) < this->short_s)
				this->short_s = abs(*it - *(it + 1));
		}
	}
	return (this->short_s);
}

void	Span::generate()
{
	srand(time(NULL));
	for (int i = 0; i < this->len; i++)
	{
		int n = rand();
		this->g.push_back(n);
	}
	this->index += this->len - 1;
}