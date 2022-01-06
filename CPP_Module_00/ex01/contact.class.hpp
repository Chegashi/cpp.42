/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 13:24:43 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/04 17:18:12 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAONTACT_CLASS_H

# define CAONTACT_CLASS_H 

# include <string>

class Contact
{
    public:
        std::string first_name;
        std::string last_name;
		std::string	nickname;
        std::string phone_number;
		std::string darkest_secret;

        Contact(std::string first_name, std::string last_name,
			std::string	nickname, std::string phone_number,
			std::string	darkest_secret);
        ~Contact();

        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;
        std::string get_phone_number(void) const;
        std::string get_darkest_secret(void) const;
};

#endif
