/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:33:54 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/19 16:06:35 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->CatBrain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
	this->CatBrain = new Brain(*other.CatBrain);
	*this = other;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->CatBrain;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain()
{
    return(this->CatBrain);
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        if (this->CatBrain)
            delete this->CatBrain;
        this->CatBrain = new Brain(*other.CatBrain);
    }
    return *this;
}