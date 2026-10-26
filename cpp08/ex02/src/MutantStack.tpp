/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:58:03 by aosset-o          #+#    #+#             */
/*   Updated: 2026/10/26 19:35:21 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T> ()
{
	
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	
}

template <typename T>
typename MutantStack<T>::iterator  MutantStack<T>::begin()
{
 	return (this->c.begin());
};

template <typename T>
typename MutantStack<T>::iterator  MutantStack<T>::end()
{
 	return (this->c.end());
};

template <typename T>
typename MutantStack<T>::const_iterator  MutantStack<T>::cbegin() const
{
 	return (this->c.begin());
};

template <typename T>
typename MutantStack<T>::const_iterator  MutantStack<T>::cend() const
{
 	return (this->c.end());
};

template <typename T>
typename MutantStack<T>::iterator  MutantStack<T>::rbegin()
{
 	return (this->c.rbegin());
};

template <typename T>
typename MutantStack<T>::iterator  MutantStack<T>::rend()
{
 	return (this->c.rend());
};

template <typename T>
typename MutantStack<T>::iterator  MutantStack<T>::rbegin() const
{
 	return (this->c.rbegin());
};

template <typename T>
typename MutantStack<T>::iterator  MutantStack<T>::rend() const
{
 	return (this->c.rend());
};