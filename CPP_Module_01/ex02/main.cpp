/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:30:27 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/11 15:17:49 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "the address in memory of the string: " << &str << std::endl;
    std::cout << "the address of the string by using stringPTR: " << stringPTR << std::endl;
    std::cout << "the address of the string by using stringREF: " << &stringREF << std::endl;
    std::cout << "the string using the pointer: " << *stringPTR << std::endl;
    std::cout << "the string using the stringREF.: " << stringREF << std::endl;
    return (0);
}
