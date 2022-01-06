/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:55:50 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/04 18:36:07 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

void header(void)
{
    std::cout << "to add a contact tape `ADD`" << std::endl;
    std::cout << "to add a contact tape `SEARCH`" << std::endl;
    std::cout << "to add a contact tape `EXIT`" << std::endl;
}

int main(void)
{
    PhoneBook annuaire;
    std::string input;
    
    std::cout << BLUE << "WELCOME to your phone book" << RESET<< std::endl;
    while (1337)
    {
        header();
        std::cin >> input;
        if (!input.compare("ADD"))
            annuaire.add();
        else if (!input.compare("SEARCH"))
            annuaire.search();
        else if (!input.compare("EXIT"))
            return (0);
        else
            std::cout << RED << "invalid input" << RESET <<std::endl;
    }
    return (0);
}
