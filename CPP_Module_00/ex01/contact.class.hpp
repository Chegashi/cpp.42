/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:50:38 by mochegri          #+#    #+#             */
/*   Updated: 2021/12/22 19:33:02 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef contact_H
# define contact_H

#include<string>
#include<iostream>

class Contact
{
    private:
        std::string	first_name;
        std::string	last_name;
        std::string	nickname;
        std::string	phone_number;
        std::string	darkest_secret;

    public:
    Contact( std::string first_name, std::string last_name,
		std::string	nickname, std::string phone_number,
		std::string	darkest_secret);
    ~Contact();
};

#endif
