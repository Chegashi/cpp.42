/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:13:07 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/14 00:07:08 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL

#include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const & src);
		virtual ~Animal();
		Animal & operator=(const Animal & src);

		virtual void	makeSound() const = 0;
		std::string		getType() const;
	protected:
    	std::string type;
};

#endif 
