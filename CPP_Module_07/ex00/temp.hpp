/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:34:17 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/20 09:57:13 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T>

void	swap(T &x, T &y)
{
    T tmp;

    tmp = x;
    x = y;
	y = tmp;
}

template < typename T>

T const &	min(T const & x, T const & y)
{
    return (x < y ? x : y);
}

template < typename T>

T const &	max(T const & x, T const & y)
{
    return (x > y ? x : y);
}