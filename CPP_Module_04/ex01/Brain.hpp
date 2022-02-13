/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:13:07 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 22:25:13 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain const & src);
		~Brain();
		static int const ideas_nbrs = 100;
		Brain & operator=(const Brain & src);

	protected:
    	std::string type;
		std::string	 ideas[100];
};

#endif 
