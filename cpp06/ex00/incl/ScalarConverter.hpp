/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 18:23:19 by aosset-o          #+#    #+#             */
/*   Updated: 2026/07/07 19:37:49 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <climits>
class ScalarConverter
{
    private:
        // Constructors and destructors
        ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        ~ScalarConverter();
    public:
        //Functions
        static void convert(std::string str);
};

char WichType(std::string str);
void ConvertChar(std::string str);
void ConvertInt(std::string str);
void ConvertFloat(std::string str);
void ConvertDouble(std::string str);
void ConvertSpecial(std::string str);
#endif
