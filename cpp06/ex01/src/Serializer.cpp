/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:21:41 by aosset-o          #+#    #+#             */
/*   Updated: 2026/07/10 17:50:09 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	
}

Serializer::Serializer(const Serializer& other)
{
	*this = other;
}

Serializer& Serializer::operator=(const Serializer& other)
{
	(void)other;
    return *this;
}
Serializer::~Serializer()
{
	
}