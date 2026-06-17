/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 18:30:21 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/17 18:38:49 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char *av[])
{
	if(ac != 2)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return(1);
	}
	
	std::string input;
	
	input = (std::string)av[1];
	std::cout << input << std::endl;
	return(0);
}