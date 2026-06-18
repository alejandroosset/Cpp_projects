/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 18:23:23 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/18 18:10:28 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Default Constructor
ScalarConverter::ScalarConverter() 
{

}

ScalarConverter::ScalarConverter(const ScalarConverter& other) 
{
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) 
{
    if (this != &other) {
        // Copy attributes here
    }
    return *this;
}

ScalarConverter::~ScalarConverter() 
{

}

void ScalarConverter::convert(std::string str)
{
    char c;

    c = WichType(str);

    switch (c)
    {
    case 'c':
        std::cout << "convert char" << std::endl;
        break;
    case 'i':
        std::cout << "convert int" << std::endl;
        break;
    case 'f':
        std::cout << "convert float" << std::endl;
        break;
    case 'd':
        std::cout << "convert double" << std::endl;
        break;
    default:
        std::cout << "Invalid atribute to convert." << std::endl;
        break;
    }
}