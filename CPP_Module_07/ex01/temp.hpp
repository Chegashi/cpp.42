/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:34:17 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/21 04:43:49 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T>

void	iter(T *x, int len, void (*f)(T const & x))
{
    for (int i = 0; i < len; i++)
        f(x[i]);
}