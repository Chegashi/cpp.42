/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 04:50:24 by mochegri          #+#    #+#             */
/*   Updated: 2022/02/21 18:25:55 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <cstdlib>

template <typename T>

class Array
{
    private:
        T *array;
        unsigned int len;
    class InvalidIndexException : public std::exception
    {
        public:
            virtual const char * what() const throw ()
            {
                return "bad index";
            }
    };
    public:
        Array<T>() : len(0)
        {
            array = NULL;
        }

        Array<T>(unsigned int n) : len(n)
        {
            array = new T[n];
        }

        ~Array()
        {
            
        }

        T & operator[](const unsigned int &index)
        {
            if (index >= this->len)
                throw Array::InvalidIndexException();
            return (this->array[index]);
        }

        Array operator=(const Array &src)
        {
            if (this->len)
                delete this->array;
            this->array = new T [src.len];
            for (int i ; i < src.size(); i++)
                this->array[i] = src.array[i];
            return(*this);
        }
        unsigned int size() const
        {
            return this->len;
        }
};
#endif