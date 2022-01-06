/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:41:53 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/04 16:15:02 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    size_t  i;
    int     j;

	if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (j = 1; j < ac; j++)
            for (i = 0; av[j][i]; i++)
                if (islower(av[j][i]))
                    std::cout << (char)toupper(av[j][i]);
                else
                    std::cout << av[j][i];
        std::cout << std::endl;
    }
    return (0);
}
 