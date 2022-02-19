/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:39:25 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/19 05:57:12 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <typeinfo>
#include <iostream>
#include <ctype.h>

typedef struct Data
{
	int	x;
	int y;
	int z;
}Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
int	main()
{
	Data d;

	d.x = 0;
	d.y = 1;
	d.z = 2;
	uintptr_t p = serialize(&d);
	Data *z = deserialize(p);
	std::cout << "[" << z->x << ", " << z->y << ", " << z->z << "]" << std::endl;
	return (0);
}
