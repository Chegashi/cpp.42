/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 01:05:47 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/23 08:12:14 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s1(mstack);

	std::cout << "_____________" << std::endl;
	std::list<int> s2;
	s2.push_back(5);
	s2.push_back(17);
	std::cout << s2.back() << std::endl;
	s2.pop_back();
	std::cout << s2.size() << std::endl;
	s2.push_back(3);
	s2.push_back(5);
	s2.push_back(737);
	//[...]
	s2.push_back(0);
	std::list<int>::iterator it2 = s2.begin();
	std::list<int>::iterator ite2 = s2.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	
	return 0;
}