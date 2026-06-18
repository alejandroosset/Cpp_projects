/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 15:28:19 by aosset-o          #+#    #+#             */
/*   Updated: 2026/06/18 18:03:34 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static int IsInt(std::string str)
{
	int i = 0;
	if(str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if(!isdigit(str[i]))
			return(0);
		i++;
	}
	return(1);
}

static int IsFloat(std::string str)
{
	int i = 0;
	if(str[0] == '-' || str[0] == '+')
		i++;
	if(isdigit(str[i]))
	{
		while (isdigit(str[i]))
			i++;
		if(str[i] != '.' || !isdigit(str[i + 1]) || str[i + 2] != '\0')
			return(0);
		return(1);
	}
	return(0);
}

static int IsDouble(std::string str)
{
	int i = 0;

	if(str[0] == '-' || str[0] == '+')
		i++;
	if(isdigit(str[i]))
	{
		while (isdigit(str[i]))
			i++;
		if(str[i] != '.' || !isdigit(str[i + 1]))
			return(0);
		i += 2;
		if(str[i] != 'f' || str[i + 1] != '\0')
			return(0);
		return(1);
	}
	return(0);
}
char WichType(std::string str)
{
	if((str.size() == 1 && !(isdigit(str[0]))) || (str.size() == 3 && str[0] == '/' && str[2] == '/'))
		return('c');
	if(IsInt(str))
		return('i');
	if(IsFloat(str))
		return('f');
	if(IsDouble(str))
		return('d');
	if(str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
		return('s');
	return('v');
}