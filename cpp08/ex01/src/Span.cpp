/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:58:03 by aosset-o          #+#    #+#             */
/*   Updated: 2026/10/21 19:57:04 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	this->Size = N;
}
Span::Span(const Span& other)
{
	this->Size = other.Size;
	this->v = other.v;
}

Span &Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->Size = other.Size;
		this->v = other.v;
	}
	return *this;
}

Span::~Span()
{
	
}
void Span::addNumber(int n)
{
	if(this->Size < this->v.size())
		std::cout << "añadir excepcion de no se puede añadir numero" << std::endl;
	else
		this->v.push_back(n);
}
unsigned int Span:: longestSpan()
{
	return(*std::max_element(this->v.begin(), this->v.end()) - *std::min_element(this->v.begin(), this->v.end()));
}

unsigned int Span:: shortestSpan()
{
	std::cout << "hacer funcion short span" << std::endl;
	return(0);
}