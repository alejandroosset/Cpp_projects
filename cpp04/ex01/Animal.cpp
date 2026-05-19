/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:13:16 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/19 11:46:24 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}
Animal::Animal(std::string name)
{
    std::cout << "Animal type constructor called" << std::endl;
    this->type = name;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string const	&Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(const std::string &type)
{
	this->type = type;
}

void Animal::makeSound() const
{ 
	std::cout << "Animal sound." << std::endl; 
}