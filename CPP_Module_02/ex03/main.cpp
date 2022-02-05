/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:50:32 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/05 04:05:50 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void )
{
    Point a(2, -1);
    Point b(3, -2);
    Point c(2, 3);
    Point p(2,1);
    std::cout << bsp(a, b, c, p) << std::endl;
    return 0;
} 