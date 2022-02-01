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
#include <map>

int main (int ac, char **av)
{
    Karen mochegri;
    static std::map<std::string, e_level> m_level;

    if (ac != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    switch (m_level[av[1]])
    {
        case DEBUG:
            std::cout << "[ DEBUG ]" << std::endl;
            mochegri.complain("DEBUG");
            break;
        case INFO:
            std::cout << "[ INFO ]" << std::endl;
            mochegri.complain("INFO");
            break;
        case WARNING:
            std::cout << "[ WARNING ]" << std::endl;
            mochegri.complain("WARNING");
            break;
        case ERROR:
            std::cout << "[ ERROR ]" << std::endl;
            mochegri.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return (0);    
}
