/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:05:42 by aosset-o          #+#    #+#             */
/*   Updated: 2026/10/10 11:06:18 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include <string>

template <typename T>
class Array
{
	private:
		T *Arr;
		unsigned int Size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();
		
		unsigned int size() const;

		//Excepciones
		class OutOfBoundException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		T &operator[](unsigned int i);
		T const &operator[](unsigned int i) const;
};

#include "../src/array.tpp"

#endif