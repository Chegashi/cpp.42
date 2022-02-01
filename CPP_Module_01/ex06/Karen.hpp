/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:13:17 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/14 00:42:34 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H

#define KAREN_H

#include <string>
#include <iostream>
enum e_level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen
{
    public:
		void complain( std::string level );
		Karen();
		~Karen();

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif