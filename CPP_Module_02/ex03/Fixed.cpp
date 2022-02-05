/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:50:41 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/05 03:41:50 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#define EPSILON 1.1929093e-7	

Fixed::Fixed() : fixed_p(0), value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;                   
}

Fixed::Fixed(int const n) :  fixed_p(roundf(n * (1 << Fixed::litteral))) , value(n)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : fixed_p(roundf(f * (float)(1 << Fixed::litteral))) ,value(f) 
{
    std::cout << "Float constructor called" << std::endl;
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
    this->fixed_p = rhs.fixed_p;
    this->value = rhs.value;
    return (*this);
}

float	Fixed::toFloat( void ) const
{
    return (float)((((float)this->fixed_p)) / (float)(1 << Fixed::litteral));
}

int	Fixed::toInt( void ) const
{
    return ((int)((((float)this->fixed_p)) / (float)(1 << Fixed::litteral)));
}

std::ostream	& operator<<(std::ostream & o , Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
    return (this->fixed_p < rhs.fixed_p) ;
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
    return (this->fixed_p <= rhs.fixed_p) ;
}

bool	Fixed::operator>(Fixed const &rhs) const
{
    return (this->fixed_p > rhs.fixed_p) ;
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
    return (this->fixed_p != rhs.fixed_p) ;
}

bool	Fixed::operator==(Fixed const &rhs) const
{
    return (this->fixed_p - rhs.fixed_p < EPSILON) ;
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
    return (Fixed(this->value * rhs.value)) ;
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
    if(rhs.value == 0)
    {
        std::cout << "Error" << std::endl;
    }
    return (Fixed(this->value / rhs.value)) ;
}

Fixed	Fixed::operator++()
{
	this->value++;
	this->fixed_p = roundf(value * (1 << Fixed::litteral));
	return (Fixed(this->value));
}

Fixed	Fixed::operator++(int)
{
    Fixed   tmp(this->value);
	this->value++;
	this->fixed_p = roundf(value * (1 << Fixed::litteral));
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

