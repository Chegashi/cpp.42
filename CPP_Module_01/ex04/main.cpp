/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:38:49 by mochegri          #+#    #+#             */
/*   Updated: 2022/01/13 20:36:57 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int ft_erreur()
{
	std::cout << "Error: file or argument" << std::endl;
	return (1);
}
std::string replace(std::string str1, std::string str2, std::string str3)
{
	size_t find;

	while ((find = str1.find(str2)) != std::string::npos)
	{
		str1.erase(find, str2.length());
		str1.insert(find, str3);
	}
	return (str1);
}

int main(int ac, char **av)
{
	std::string data;
	std::string line;
	std::string filename;


    if (ac != 4 || !av[2][0])
		return (ft_erreur());
	filename = av[1];
    std::ifstream ifs(filename);
    if (!ifs)
		return (ft_erreur());
	data = "";
	while (!ifs.eof())
	{
		if (data.compare(""))
			data += "\n";
		getline( ifs, line );
		data += line;
	}
	ifs.close();
	std::ofstream ofs(filename + ".replace");
	ofs << replace(data, av[2], av[3]);
	ofs.close();
    return (0);
}
