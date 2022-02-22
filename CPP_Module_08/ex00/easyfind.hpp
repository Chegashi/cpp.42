/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:21:44 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/22 20:27:00 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>


class InvalidArg : public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return "invalid arg";
		}
};

template <typename T>

int	easyfind(T ds, int n)
{
	typename T::iterator i = (std::find(ds.begin(), ds.end(), n));
	if (i != ds.end())
		return(i - ds.begin());
	else
		return (-1);
};

#endif
