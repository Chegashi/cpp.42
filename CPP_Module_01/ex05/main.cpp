/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 23:13:18 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/14 00:20:40 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main ()
{
    Karen mochegri;

    mochegri.complain("DEBUG");
    mochegri.complain("INFO");
    mochegri.complain("WARNING");
    mochegri.complain("ERROR");
    return (0);    
}
