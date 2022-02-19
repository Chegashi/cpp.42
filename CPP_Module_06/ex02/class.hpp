/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:21:01 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/19 22:29:43 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TYPE_H
#define REAL_TYPE_H

#include <iostream>

class Base
{
	public:
		Base ();
		Base(const Base &src);
		Base & operator=(const Base & src);
		virtual ~Base();
};

class A : public Base
{
	public:
		A ();
		A(const A &src);
		A & operator=(const A & src);
		virtual ~A();
};

class B : public Base
{
	public:
		B ();
		B(const B &src);
		B & operator=(const B & src);
		virtual ~B();
};

class C : public Base
{
	public:
		C ();
		C(const C &src);
		C & operator=(const C & src);
		virtual ~C();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
