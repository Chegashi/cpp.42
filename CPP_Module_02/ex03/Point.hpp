/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:37:17 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/05 04:08:55 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point 
{
	public:
		Point(void);
		Point(float const x, float const y);
		Point(Point const & src);
		~Point();
        Point	& operator=(Point const &rhs);
        
        double	dist(Point const &rhs);
	private:
		Fixed const x;
		Fixed const y;

};

std::ostream	& operator<<(std::ostream & o , Point const &rhs);
bool			bsp( Point const a, Point const b, Point const c, Point const point);
