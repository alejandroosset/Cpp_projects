/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:57:56 by aosset-o          #+#    #+#             */
/*   Updated: 2026/10/26 19:34:35 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
template <typename T>

class MutantStack : public std::stack<T>
{
    public:
		// Constructores y destructores
		MutantStack();
        ~MutantStack();
		
		// Iteradores begin y end, tanto constantes como normales
		typedef typename std::deque<T>::iterator iterator;
		iterator begin();
		iterator end();

		typedef typename std::deque<T>::iterator const_iterator;
		const_iterator cbegin() const;
		const_iterator cend() const;

		// Iteradores rbegin y rend, tanto constantes como normales
		typedef typename std::deque<T>::iterator reverse_iterator;
		const_iterator rbegin();
		const_iterator rend();

		// Iteradores rbegin y rend, tanto constantes como normales
		typedef typename std::deque<T>::iterator const_reverse_iterator;
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#include "../src/MutantStack.tpp"
#endif