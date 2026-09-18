/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:51:01 by aosset-o          #+#    #+#             */
/*   Updated: 2026/09/18 13:04:04 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string name, int age)
{
	this->name = name;
	this->age = age;
}
Data::Data(const Data& other)
{
	*this = other;
}
Data& Data::operator=(const Data& other)
{
	if(this != &other)
	{
		this->name = other.name;
		this->age = other.age;
	}
    return *this;
}

Data::~Data()
{
	
}