/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:58:03 by aosset-o          #+#    #+#             */
/*   Updated: 2026/10/26 16:26:44 by aosset-o         ###   ########.fr       */
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

const char *Span::ArrayCompleteException::what() const throw()
{
	return("The array is complete.");
}
void Span::addNumber(int n)
{
	if(this->Size <= this->v.size())
		throw ArrayCompleteException();
	else
		this->v.push_back(n);
}
unsigned int Span:: longestSpan()
{
	return(*std::max_element(this->v.begin(), this->v.end()) - *std::min_element(this->v.begin(), this->v.end()));
}

unsigned int Span:: shortestSpan()
{
	unsigned int span = this->longestSpan();
	for (unsigned int i = 0; i < this->Size; i++)
	{
		for (unsigned int j = 0; j < this->Size; j++)
		{
			if (j != i)
			{
				if((unsigned int)(this->v[i] - this->v[j]) < span && this->v[i] - this->v[j] > 0)
					span = this->v[i] - this->v[j];
			}
		}
	}
	return(span);
}