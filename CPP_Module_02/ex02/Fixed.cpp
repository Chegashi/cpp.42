/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:50:41 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/06 00:07:32 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#define EPSILON 1.1929093e-7

Fixed::Fixed() : value(0)
{
    // std::cout << "Default constructor called" << std::endl;
    return;                   
}

Fixed::Fixed(int const n) :  value((n * (1 << Fixed::litteral)))
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : value(roundf(f * (float)(1 << Fixed::litteral)))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits( int const n)
{
    // std::cout << "Assignation operator called" << std::endl;
    this->value = n;
}

Fixed	& Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
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

bool	Fixed::operator<(Fixed const &rhs) const
{
    return (this->value < rhs.value) ;
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
    return (this->value <= rhs.value) ;
}

bool	Fixed::operator>(Fixed const &rhs) const
{
    return (this->value > rhs.value) ;
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
    return (this->value >= rhs.value) ;
}

bool	Fixed::operator==(Fixed const &rhs) const
{
    return (this->value - rhs.value < EPSILON) ;
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
    return (this->value - rhs.value >= EPSILON) ;
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
    return (Fixed(rhs.value + this->value)) ;
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
    return (Fixed(rhs.value - this->value)) ;
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
    long c = ((long)this->value * (long)rhs.value) / (1 << Fixed::litteral);
    Fixed tmp;
    tmp.setRawBits(c);
    return (tmp);
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
    if(rhs.value == 0)
    {
        std::cout << "Error" << std::endl;
    }
    long c = ((long)this->value / (long)rhs.value) * (1 << Fixed::litteral);
    Fixed tmp;
    tmp.setRawBits(c);
    return (tmp);
}

Fixed	Fixed::operator++() //pre
{
	// this->value += (1 << Fixed::litteral);
    this->value++;
	return (Fixed(this->toFloat()));
}

Fixed	Fixed::operator++(int) //post
{
    Fixed   var(this->toFloat());
    this->value++;
	// this->value += (1 << Fixed::litteral);
	return (var);
}

Fixed	Fixed::operator--() //pre
{
	this->value -= (1 << Fixed::litteral);
	return (Fixed(this->toInt()));
}

Fixed	Fixed::operator--(int) //post
{
    Fixed   tmp(this->value);
	this->value -= (1 << Fixed::litteral);
	return (tmp);
}

Fixed   const &Fixed::max(Fixed const &a, Fixed  const &b)
{
	return (a > b ? a : b);
}

Fixed   const &Fixed::min(Fixed const &a, Fixed  const &b)
{
	return (a < b ? a : b);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}
