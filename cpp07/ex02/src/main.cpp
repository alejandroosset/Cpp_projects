/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:05:45 by aosset-o          #+#    #+#             */
/*   Updated: 2026/09/26 13:28:02 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main() 
{
	Array<int> emptyArray(4);
    Array<int> copyArray = emptyArray;
	std::cout << copyArray.GetSize() << std::endl;
    return(0);
}