/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:27:32 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/13 22:44:33 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#define ARRAY_SIZE 100

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
	delete i;
    Animal array[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++)
        if (i < ARRAY_SIZE / 2)
            array[i] = Dog();
        else
            array[i] = Cat();
    Dog basic;
    Dog tmp = basic;

}