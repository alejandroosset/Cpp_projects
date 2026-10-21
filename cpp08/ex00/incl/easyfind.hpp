/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:57:47 by aosset-o          #+#    #+#             */
/*   Updated: 2026/10/21 18:57:48 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class NumberNotFoundException : public std::exception
{
    public:
        virtual const char *what() const throw();
};
template <typename T>
typename T::iterator easyFind(T &Arr, int n)
{
    typename T::iterator iter = std::find(Arr.begin(), Arr.end(), n);

    if (iter == Arr.end())
        throw NumberNotFoundException();
    return iter;
}
#endif