/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:05:42 by aosset-o          #+#    #+#             */
/*   Updated: 2026/09/22 18:51:22 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> T myMax(T x, T y)
{
	return(x > y) ? x : y;
}

template <typename T> T myMin(T x, T y)
{
	return(x < y) ? x : y;
}

template <typename T> void swap(T  &x,T &y)
{
    T temp = x;
    x = y;
    y= temp;
}
#endif