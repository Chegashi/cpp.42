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

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
		std::string	nickname;
        std::string phone_number;
		std::string darkest_secret;

    public:
        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;
        std::string get_phone_number(void) const;
        std::string get_darkest_secret(void) const;
        void set_first_name(std::string str);
        void set_last_name(std::string str);
        void set_nickname(std::string str);
        void set_phone_number(std::string str);
        void set_darkest_secret(std::string str);
};

#endif
