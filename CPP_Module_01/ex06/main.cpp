/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:13:18 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/14 00:52:02 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (int ac, char **av)
{
    Karen test;
    int     id;

    if (ac != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    id = test.get_id(av[1]);
    switch (id)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            test.complain("DEBUG");
            break;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            test.complain("INFO");
            break;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            test.complain("WARNING");
            break;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            test.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return (0);    
}
