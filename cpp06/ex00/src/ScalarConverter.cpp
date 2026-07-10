/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 18:23:23 by aosset-o          #+#    #+#             */
/*   Updated: 2026/07/10 17:25:43 by aosset-o         ###   ########.fr       */
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
    (void)other;
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
        ConvertChar(str);
        break;
    case 'i':
        ConvertInt(str);
        break;
    case 'f':
        ConvertFloat(str);
        break;
    case 'd':
        ConvertDouble(str);
        break;
    case 's':
        ConvertSpecial(str);
        break;
    default:
        std::cout << "Invalid atribute to convert." << std::endl;
        break;
    }
}