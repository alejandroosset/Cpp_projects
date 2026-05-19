/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:31:52 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/19 11:33:04 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string name)
{
    std::cout << "WrongAnimal type constructor called" << std::endl;
    this->type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string const	&WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(const std::string &type)
{
	this->type = type;
}

void WrongAnimal::makeSound() const
{ 
	std::cout << "Wrong animal sound." << std::endl; 
}