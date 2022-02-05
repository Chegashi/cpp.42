/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:50:45 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/25 16:31:17 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

typedef uint32_t t_fixed_point;

class Fixed 
{
	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const f);
		Fixed(Fixed const & src);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed	& operator=(Fixed const &rhs);

		float	toFloat( void ) const;
		int		toInt( void ) const;
		t_fixed_point		fixed_p;

	private:
		int					value;
		static const int	litteral = 8;

};

	std::ostream	& operator<<(std::ostream & o , Fixed const &rhs);