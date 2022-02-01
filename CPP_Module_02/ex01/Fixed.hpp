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

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(Fixed const & src);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int					value;
		static const int	litteral = 8;
};
