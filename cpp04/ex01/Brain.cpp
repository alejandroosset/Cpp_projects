/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 13:13:10 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/19 16:06:36 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int i, std::string idea)
{
	if(i > -1 && i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "Wrong idea index" << std::endl;
}

std::string Brain::getIdea(int i)
{
	if(i > -1 && i < 100)
		return(this->ideas[i]);
	return"";
}