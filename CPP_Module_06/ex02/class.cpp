/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:26:39 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/19 22:34:34 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

Base::Base()
{
	std::cout << "Base : default constructor called" << std::endl;
}

Base::~Base()
{
	std::cout << "Base : default deconstructor called" << std::endl;
}

Base::Base(const Base &src)
{
	(void)src;
	std::cout << "Base : copy deconstructor called" << std::endl;
}

Base & Base::operator=(const Base & src)
{
	(void)src;
    return (*this);
}


A::A()
{
	std::cout << "A : default constructor called" << std::endl;
}

A::~A()
{
	std::cout << "A : default deconstructor called" << std::endl;
}

A::A(const A &src)
{
	(void)src;
	std::cout << "A : copy deconstructor called" << std::endl;
}

A & A::operator=(const A & src)
{
	(void)src;
    return (*this);
}



B::B()
{
	std::cout << "B : default constructor called" << std::endl;
}

B::~B()
{
	std::cout << "B : default deconstructor called" << std::endl;
}

B::B(const B &src)
{
	(void)src;
	std::cout << "B : copy deconstructor called" << std::endl;
}

B & B::operator=(const B & src)
{
	(void)src;
    return (*this);
}


C::C()
{
	std::cout << "C : default constructor called" << std::endl;
}

C::~C()
{
	std::cout << "C : default deconstructor called" << std::endl;
}

C::C(const C &src)
{
	(void)src;
	std::cout << "C : copy deconstructor called" << std::endl;
}

C & C::operator=(const C & src)
{
	(void)src;
    return (*this);
}



Base * generate(void)
{
	int		rondom;

	srand(time(NULL));
	rondom = rand() % 3;
	std::cout << rondom << std::endl;
	if (!rondom)
		return (new A());
	else if (rondom == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	A	*p_a = dynamic_cast<A *>(p);
	B	*p_b = dynamic_cast<B *>(p);
	C	*p_c = dynamic_cast<C *>(p);
	if (p_a)
		std::cout << "A pointer" << std::endl;
	else if (p_b)
		std::cout << "B pointer" << std::endl;
	else if (p_c)
		std::cout << "C pointer" << std::endl;
	else
		std::cout << "UNDEFIND pointer" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		std::cout << "A REF" << std::endl;
		(void)a;
	} catch(const std::exception& e) {}
	try
	{
		B & b = dynamic_cast<B &>(p);
		std::cout << "B REF" << std::endl;
		(void)b;
	} catch(const std::exception& e) {}
	try
	{
		C & c = dynamic_cast<C &>(p);
		std::cout << "C REF" << std::endl;
		(void)c;
	} catch(const std::exception& e) {}
	
}

