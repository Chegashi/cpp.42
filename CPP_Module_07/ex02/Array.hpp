/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 04:50:24 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/21 05:31:14 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

template <typename T>

class Array
{
    private:

    public:
        Array();
        Array(unsigned int n);
        ~Array();
        operator=(const Array &src);
};
// Array<int>::Array(int)
// {
    
// }
#endif