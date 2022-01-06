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

#include "contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <iostream>

void header(void)
{
    std::cout << "Bienvenue dans votre annuaire" << std::endl;
    std::cout << "pour ajouter un contact taper `ADD`" << std::endl;
    std::cout << "pour chercher un contact taper `SEARCH`" << std::endl;
    std::cout << "pour quiter votre annuaire taper `EXIT`" << std::endl;
}

int main(void)
{
    PhoneBook annuaire;
    std::string input;

    annuaire = PhoneBook();
    while (1337)
    {
        header();
        std::cin >> input;
        if (!input.compare("ADD"))
            annuaire.add();
        else if (!input.compare("search"))
            annuaire.search();
        else if (!input.compare("exit"))
            break;
        else
            std::cout << "invalid input" << std::endl;
    }
    return (0);
}
