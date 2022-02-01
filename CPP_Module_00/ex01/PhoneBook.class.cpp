/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:58:09 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/29 19:29:52 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"
#include "contact.class.hpp"

int	PhoneBook::contact_nbr = 0;

void	PhoneBook::add(void)
{
    std::string str;

    if (PhoneBook::contact_nbr < 8)
    {
        std::cout << "first_name:"; std::cin >> str;
        this->contacts[contact_nbr].set_first_name(str);
        std::cout << "last_name:"; std::cin >> str;
        this->contacts[contact_nbr].set_last_name(str);
        std::cout << "nickname:"; std::cin >> str;
        this->contacts[contact_nbr].set_nickname(str);
        std::cout << "phone_number:"; std::cin >> str;
        this->contacts[contact_nbr].set_phone_number(str);
        std::cout << "darkest_secret:"; std::cin >> str;
        this->contacts[contact_nbr].set_darkest_secret(str);
        std::cout << GREEN << "👍 the contact was added." << RESET << std::endl;
        PhoneBook::contact_nbr++;
    }
    else
        std::cout << "😔 you cant add more than 8 contact." << std::endl;
}

std::string reduce(std::string str)
{
    std::string s;
    if (str.length() > 10)
    {
        s = "";
        for (int i = 0; i < 9; i++)
            s = s + str[i];
        s = s + '.';
        return (s);
    }
    else
        return (str);
}

void formated(int i , Contact c, bool end)
{
    std::cout << "│" << std::setw(10) << i << "│";
    std::cout << std::setw(10) << reduce(c.get_first_name()) << "│";
    std::cout << std::setw(10) << reduce(c.get_last_name()) << "│";
    std::cout << std::setw(10) << reduce(c.get_nickname()) << "│" << std::endl;
    if (!end)
        std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
}

void    PhoneBook::search(void)
{
    char	indice;
    int		i;

    std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
    std::cout << "│index     │" << "first_name│" << "last_name │" << "nick_name │" << std::endl;
    std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
    for (int i = 0; i < PhoneBook::contact_nbr; i++)
        formated(i, this->contacts[i], i == PhoneBook::contact_nbr - 1);
    std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
    std::cout << "the contact to search for:";
    std::cin >> indice;
    if (indice - '0' >= PhoneBook::contact_nbr || indice < '0')
    {
        std::cout << "invalid index 🙄\n";
        return ;
    }
	i = indice - '0';
    std::cout << MAGENTA << "first_name:" << RESET << contacts[i].get_first_name() << std::endl;
    std::cout << MAGENTA << "last_name:" << RESET << contacts[i].get_last_name() << std::endl;
    std::cout << MAGENTA << "nickname:" << RESET << contacts[i].get_nickname() << std::endl;
    std::cout << MAGENTA << "phone_numbe" << RESET << contacts[i].get_phone_number() << std::endl;
    std::cout << MAGENTA << "darkest_secret 🤐:" << RESET << contacts[i].get_darkest_secret() << std::endl;
}
