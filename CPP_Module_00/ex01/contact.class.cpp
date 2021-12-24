/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:30:26 by mochegri          #+#    #+#             */
/*   Updated: 2021/12/22 19:35:48 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact( std::string first_name, std::string last_name,
		std::string	nickname, std::string phone_number,
		std::string	darkest_secret) : first_name(first_name),
    last_name(last_name), nick_name(nick_name), phone_number(phone_number),
    darkest_secret(darkest_secret)
{
    
};

// Contact::Contact ~contact(first_name, last_name, nick_name, phone_number, darkest_secret)
// {
    
// };