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

void Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}
void Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}