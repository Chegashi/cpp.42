/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 22:23:32 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/22 20:19:30 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include<vector>

#define NBR 5
int	main(void)
{
	srand(time(NULL));
	std::vector<int> ar;
	for (int i = 1; i <= NBR; i++)
        ar.push_back(rand() % 1000);
	for (std::vector<int>::iterator i = ar.begin(); i != ar.end(); ++i)
        std::cout << *i << " ";
	std::cout << std::endl;
	int r = easyfind(ar, 54) ;
	std::cout << "[" << r << "]" << std::endl;
	return 0;
}