/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:58:53 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 21:43:11 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & src);
		~Cat();
		Cat & operator=(const Cat & src);

		void		makeSound() const;
};

#endif 