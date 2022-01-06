/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:44:41 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/04 17:12:06 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(std::string first_name, std::string last_name,
			std::string	nickname, std::string phone_number,
			std::string	darkest_secret) : first_name(first_name),
            last_name(last_name), nickname(nickname), phone_number(phone_number),
            darkest_secret(darkest_secret)
{
    ;
}

std::string Contact::get_first_name(void) const
{
	return (this->first_name);
}

std::string Contact::get_last_name(void) const
{
	return (this->last_name);
}

std::string Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}