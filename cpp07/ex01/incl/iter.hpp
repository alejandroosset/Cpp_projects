/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:05:42 by aosset-o          #+#    #+#             */
/*   Updated: 2026/09/22 18:51:22 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>
#include <string>

template <typename TArray, typename TFunction>
void iter(TArray *Array, const std::size_t Length, TFunction Function)
{
	for (std::size_t i = 0; i < Length; i++)
	{
		Function(Array[i]);
	}
}
#endif