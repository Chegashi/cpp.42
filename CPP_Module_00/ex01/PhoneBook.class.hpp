/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 15:41:22 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/05 17:27:09 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_Classe_H
# define PhoneBook_Classe_H

# include "contact.class.hpp"

class PhoneBook
{
    public:
        Contact contacts[8];
        void    add();
        void    search();
        int  static contact_nbr;
};

#endif
