/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosset-o <aosset-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:19:30 by aosset-o          #+#    #+#             */
/*   Updated: 2026/05/18 18:15:00 by aosset-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Claptrap default constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 10;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Claptrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Claptrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
        std::cout << "Claptrap " << this->name << " attacks " << target << ", causing " << this->hitPoints << " points of damage!" << std::endl;
    else if(this->energyPoints < 0)
        std::cout << "Claptrap has insufficient energy points." << std::endl;
    else
        std::cout << "Claptrap is dead =( ." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hitPoints > (int)amount)
        hitPoints -= amount;
    else if(hitPoints > 0)
        hitPoints = 0;
    else
    {
        std::cout << "Claptrap Is already dead =( ." << std::endl;
        return ; 
    }
    std::cout << "Claptrap " << this->name << " has taken " << amount << " " << this->hitPoints << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->hitPoints += amount;
        std::cout << "Claptrap " << this->name << " has healed " << amount << " " << this->hitPoints << " points of health!" << std::endl;
    }
    else if(this->energyPoints < 0)
        std::cout << "Claptrap has insufficient energy points." << std::endl;
    else
        std::cout << "Claptrap is dead =( ." << std::endl;
}