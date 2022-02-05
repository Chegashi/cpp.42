/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:50:41 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/05 22:28:07 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;                   
}

Fixed::Fixed(int const n) :  value(roundf(n * (1 << Fixed::litteral)))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : value(roundf(f * (float)(1 << Fixed::litteral))) 
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits( int const n)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = n;
}

Fixed	& Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = rhs.value;
    return (*this);
}

float	Fixed::toFloat( void ) const
{
    return (float)((((float)this->value)) / (float)(1 << Fixed::litteral));
}

int	Fixed::toInt( void ) const
{
    return ((int)((((float)this->value)) / (float)(1 << Fixed::litteral)));
}

std::ostream	& operator<<(std::ostream & o , Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}
