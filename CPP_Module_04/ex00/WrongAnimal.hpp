/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:13:07 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 16:55:24 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_H
#define WrongAnimal_H

#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal & operator=(const WrongAnimal & src);

		void		makeSound() const;
		std::string	getType() const;
	protected:
    	std::string type;
};

#endif 
