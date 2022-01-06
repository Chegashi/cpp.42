/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:58:09 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/04 19:19:07 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "contact.class.hpp"

int PhoneBook::nbr = 0;

void    PhoneBook::add()
{
    if (nbr < 8)
    {
        std::cout << "first_name:";
        std::cin >> this->contacts[nbr].first_name;
        std::cout << "last_name:";
        std::cin >> this->contacts[nbr].last_name;
        std::cout << "nickname:";
        std::cin >> this->contacts[nbr].nickname;
        std::cout << "phone_number:";
        std::cin >> this->contacts[nbr].phone_number;
        std::cout << "darkest_secret:";
        std::cin >> this->contacts[nbr].darkest_secret;
        this->nbr++;
    }
    else
        std::cout << "you cant add more than 8 contact";
}

void    PhoneBook::search()
{
    std::string input;

    std::cout << "the contact to search for:";
    std::cin >> input;  
    for (int i = 0; i < this->nbr; i++)
    {
        
        // if (input.compare(this->contacts[i].)
    }
}