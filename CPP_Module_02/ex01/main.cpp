/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:50:32 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/25 16:36:49 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;// a is 1234.43
    std::cout << "b is " << b << std::endl;// b is 10
    std::cout << "c is " << c << std::endl;// c is 42.4219
    std::cout << "d is " << d << std::endl;// d is 10
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;// a is 1234 as integer
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;// b is 10 as integer
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;// c is 42 as integer
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;// d is 10 as integer
    return 0;
}
