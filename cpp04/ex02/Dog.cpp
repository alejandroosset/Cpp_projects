/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:27:11 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/19 16:06:38 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->DogBrain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called" << std::endl;
	this->DogBrain = new Brain(*other.DogBrain);
	*this = other;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->DogBrain;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Brain* Dog::getBrain()
{
    return(this->DogBrain);
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        if (this->DogBrain)
            delete this->DogBrain;
        this->DogBrain = new Brain(*other.DogBrain);
    }
    return *this;
}